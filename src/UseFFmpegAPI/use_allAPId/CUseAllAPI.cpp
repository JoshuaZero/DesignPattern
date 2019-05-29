//
// Created by st007 on 19-3-6.
//

#ifdef __cplusplus
extern "C"{
#endif
#include <libavutil/log.h>
#include <libavformat/avformat.h>
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