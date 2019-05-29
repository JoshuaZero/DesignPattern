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
        av_log(NULL, AV_LOG_INFO, "Can't open file: %s\n", av_err2str(ret));
        return -1;
    }

    ret = av_dump_format(fmt_ctx, 0, "./test.mp4", 0);

    avformat_close_input(&fmt_ctx);

    return 0;
}