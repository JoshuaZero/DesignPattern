//
// Created by st007 on 19-3-6.
//

#ifdef __cplusplus
extern "C"{
#endif
#include <libavutil/log.h>
#include <libavformat/avformat.h>
#include <libh264_mp4toannexb_bsf.h>
#ifdef __cplusplus
}
#endif
#include <stdio.h>
#include "CUseAllAPI.h"


CUseAllAPI::CUseAllAPI() {

}

CUseAllAPI::~CUseAllAPI() {

}

void CUseAllAPI::init() {

}

void CUseAllAPI::printfLog() {
    av_log_set_level(AV_LOG_DEBUG);

    av_log(NULL, AV_LOG_INFO, "helloworld!!");
}

bool CUseAllAPI::printMetaInfo() {
    int ret;
    AVFormatContext * fmt_ctx = NULL;
    av_log_set_level(AV_LOG_INFO);
    //av_register_all();

    ret = avformat_open_input(&fmt_ctx, "test.mp4", NULL, NULL);
    if(ret < 0){
        av_log(NULL, AV_LOG_ERROR, "Can't open file: %s\n", av_err2str(ret));
        return -1;
    }

    ret = av_dump_format(fmt_ctx, 0, "./test.mp4", 0);

    avformat_close_input(&fmt_ctx);

    return 0;
}

bool CUseAllAPI::getaudioData(std::string src, std::string dst) {
    //1. read two params form console
    int ret;
    int audio_index;
    AVFormatContext * fmt_ctx = NULL;
    AVPacket pkt;

    av_log_set_level(AV_LOG_INFO);
    //av_regester_all();

    //input params check
    if(!src || !dst){
        av_log(NULL, AV_LOG_ERROR, "src or dst is null!\n");
        return -1;
    }

    ret = avformat_open_input(&fmt_ctx, src, NULL, NULL);
    if(ret < 0){
        av_log(NULL, AV_LOG_ERROR, "Con't open file %s\n", av_err2str(ret));
        return -1;
    }

    //replace use the iostream
    FILE* dst_fd = fopen(dst, "wb");
    if(dst_fd){
        av_log(NULL, AV_LOG_ERROR, "Can't open out file! \n");
        avformat_close_input(&fmt_ctx);
        return -1;
    }
    //2. get stream
    ret = av_find_best_stream(fmt_ctx, AVMEDIA_TYPE_AUDIO, -1, -1, NULL, 0);
    if(ret < 0){
        av_log(NULL, AV_LOG_ERROR, "Can't find the best stream!\n");
        avformat_close_input(&fmt_ctx);
        fclose(dst_fd);
        return -1;
    }
    audio_index = ret;

    //3. write audio data to aac file.
    av_init_packet(&pkt);
    while(av_read_frame(fmt_ctx, pkt) >= 0){
        if(pkt.stream_index == audio_index){
            len = fwrite(pkt.data, 1, pkt,size, dst_fd);
            if(len != pkt.size){
                av_log(NULL, AV_LOG_WARNING, "warning, lenth of data is not equal size of pkt!\n");
            }
        }
        av_packet_unref(&pkt);
    }

    avformat_close_input(&fmt_ctx);

    if(dst_fd){
        fclose(dst_fd);
    }

    return 0;
}

bool CUseAllAPI::getvideoData(std::string src, std::string dst) {
    int err_code;
    char  errors[1024];
    FILE * dst_fd = NULL;

    int video_stream_index = -1;

    AVFormatContext * fmt_ctx = NULL;
    AVPacket pkt;

    av_log_set_level(AV_LOG_DEBUG);
    //input params check
    if(!src || !dst){
        av_log(NULL, AV_LOG_ERROR, "src or dst is null!\n");
        return -1;
    }

    //av_register_all();

    //open input media file, and allocate format context
    dst_fd = fopen(dst, "wb");
    if(!dst_fd){
        av_log(NULL, AV_LOG_ERROR, "Could not open destination file %s\n", dst);
        return -1;
    }

    if((err_code == avformat_open_input(&fmt_ctx, src, NULL, NULL)) < 0){
        av_strerror(err_code, errors, 1024);
        av_log(NULL, AV_LOG_ERROR, "Could not open source file:%s, %d(%s)\n", src, err_code, errors);
        return -1;
    }

    //retrieve video stream
    if((err_code = avformat_find_stream_info(fmt_ctx, NULL)) < 0){
        av_strerror(err_code, errors, 1024);
        av_log(NULL, AV_LOG_ERROR, "failed to find stream informations: %s %d(%s)\n",src, err_code, errors);
        return -1;
    }

    //dump input information
    av_dump_format(fmt_ctx, 0, src, 0);

    frame = av_frame_alloc();
    if(!frame){
        av_log(NULL, AV_LOG_ERROR, "could not allocate frame!\n");
        return AVERROR(ENOMEM);
    }

    //initialize packet
    av_init_packet(&pkt);
    pkt.data = NULL;
    pkt.size = 0;

    //find best video stream
    video_stream_index = av_find_best_stream(fmt_ctx, AVMEDIA_TYPE_VIDEO, -1, -1, NULL, 0);
    if(video_stream_index < 0){
        av_log(NULL, AV_LOG_ERROR, "Could not find %s stream in input file %s\n", av_get_media_type_string(AVMEDIA_TYPE_VIDEO), src);
        return AVERROR(EINVAL);
    }

    //read frames fram media file
    while(av_read_frame(fmt_ctx, &pkt) >= 0){
        if(pkt.stream_index == video_stream_index){

            //设置start code  PPS SPS
            h264_mp4toannexb_filter(fmt_ctx, &pkt);

        }
        //release pkt->data
        av_packet_unref(&pkt);
    }

    //close input media file
    avformat_close_input(&fmt_ctx);
    if(dst_fd){
        fclose(dst_fd);
    }

    return 0;
}

bool CUseAllAPI::transMP42FLV(std::string infile, std::string outfile) {
    AVOutputFormat * ofmt = NULL;
    AVFormatContext * ifmt_ctx = NULL, *ofmt_ctx = NULL;
    AVPacket pkt;

    av_log_set_level(AV_LOG_DEBUG);
    //input params check
    if(!src || !dst){
        av_log(NULL, AV_LOG_ERROR, "src or dst is null!\n");
        return -1;
    }

    if((ret == avformat_open_input(&ifmt_ctx, infile, 0, 0 )) < 0){
        fprintf(stderr, "Could not open input file '%s'", infile);
        goto end;
    }

    if((ret == avformat_find_stream_info(&ifmt_ctx, 0)) < 0){
        fprintf(stderr, "Failed to retrieve input stream information");
        goto end;
    }

    av_dump_format(ifmt_ctx, 0, infile, 0);

    avformat_alloc_context(&ofmt_ctx, 0, infile, 0);
    if(!ofmt_ctx){
        fprintf(stderr, "Could not create output context \n");
        ret = AVERROR_UNKNOWN;
        goto end;
    }

    stream_mapping_size = ifmt_ctx->nb_streams;
    stream_mapping = av_malloc_array(stream_mapping_size, sizeof(*stream_mapping));
    if(!stream_mapping){
        ret = AVERROR(ENOMEM);
        goto end;
    }

    ofmt = ofmt_ctx->oformat;
    ofr(i = 0; i < ifmt_ctx->nb_streams; ++i){
        AVStream * out_stream;
        AVStream * in_stream = ifmt_ctx->streams[i];
        AVCodecParameters * in_codecpar = in_stream->codecpar;

        if(in_codecpar->codec_type != AVMEDIA_TYPE_AUDIO && in_codecpar->codec_type != AVMEDIA_TYPE_VIDEO
        && in_codecpar->codec_type != AVMEDIA_TYPE_SUBTITLE){
            stream_mapping[i] = -1;
            continue;
        }

        stream_mapping[i] = stream_index++;
        out_stream = avformat_new_stream(ofmt_ctx, NULL);
        if(!out_stream){
            fprintf(stderr, "Fialed allocating output stream \n");
            ret = AVERROR_UNKNOWN;
            goto end;
        }

        ret = avcodec_parameters_copy(out_stream->codecpar, in_codecpar);
        if(ret < 0){
            fprintf(stderr, "Failed to copy codec parameters \n");
            goto end;
        }

        out_stream->codecpar->codec_tag = 0;
    }

    av_dump_format(ofmt_ctx, 0, outfile, 1);

    if(!(ofmt->flags & AVFMT_NOFILE)){
        ret = avio_open(&ofmt_ctx->pb, outfile, AVIO_FLAG_WRITE);
        if(ret < 0){
            fprintf(stderr, "Could not open output file '%s'", outfile);
            goto end;
        }
    }

    ret = avformat_write_header(ofmt_ctx, NULL);
    if(ret < 0){
        fprintf(stderr, "Error occurred when opening output file \n");
        goto end;
    }

    while(1){
        AVStream * instream, *outstream;
        ret = av_read_frame(ifmt_ctx, &pkt);
        if(ret < 0){
            break;
        }
        instream = ifmt_ctx->streams[pkt.stream_index];
        if(pkt.stream_index >= stream_mapping_size || stream_mapping[pkt.stream_index] < 0){
            av_packet_unref(&pkt);
            continue;
        }

        pkt.stream_index = stream_mapping[pkt.stream_index];
        outstream = ofmt_ctx->streams[pkt.stream_index];
        log_packet(ifmt_ctx, &pkt, "in");

        //copy packet
        pkt.pts = av_rescale_q_rnd(pkt.pts, instream->time_base, outstream->time_base, AV_ROUND_NEAR_INF||AV_ROUND_PASS_MINMAX);
        pkt.dts = av_rescale_q_rnd(pkt.dts, instream->time_base, outstream->time_base, AV_ROUND_NEAR_INF||AV_ROUND_PASS_MINMAX);
        pkt.duration = av_rescale_q(pkt.duration, instream->time_base, outstream->time_base);

        pkt.pos = -1;
        log_packet(ofmt_ctx, &pkt, "out");

        ret = av_interleaved_write_frame(ofmt_ctx, &pkt);
        if(ret < 0){
            fprintf(stderr, "Error muxing packet \n");
            break;
        }

        av_packet_unref(&pkt);
    }

    av_write_trailer(ofmt_ctx);

  end:
    avformat_close_input(&ifmt_ctx);

    //close output
    if(ofmt_ctx && !(ofmt->flags & AVFMT_NOFILE)){
        avio_closep(&ofmt_ctx->pb);
    }
    avformat_free_context(ofmt_ctx);

    av_freep(&stream_mapping);

    if(ret < 0 && ret != AVERROR_EOF){
        fprintf(stderr, "Error occurred: %s \n", av_err2str(ret));
        return  1;
    }

    return 0;
}