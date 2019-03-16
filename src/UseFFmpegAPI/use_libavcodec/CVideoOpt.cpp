//
// Created by st007 on 19-3-8.
//

#ifdef __cplusplus
extern "C" {
#endif
#include <libavcodec/avcodec.h>
#ifdef __cplusplus
}
#endif
#include "CVideoOpt.h"

CVideoOpt::CVideoOpt() {

}

CVideoOpt::~CVideoOpt() {

}

void CVideoOpt::initialize() {

}

void CVideoOpt::openSrcFile(std::string fileIn, std::string mode) {

}

void CVideoOpt::saveDesFile(std::string fileIn, std::string mode) {

}

void CVideoOpt::allocResource() {

}

void CVideoOpt::decodeData() {

}

void CVideoOpt::encodeData() {

}

void CVideoOpt::freeResource() {

}

void CVideoOpt::setCoDecID(enum AVCodecID id) {
    m_codec = avcodec_find_decoder(id);
    if(m_codec == NULL){

    }
}

void CVideoOpt::allocAvPacket() {
    m_pkt = av_packet_alloc();
    if(m_pkt == NULL){

    }
}

void CVideoOpt::allocAvframe() {

}

void CVideoOpt::allocAvcodecCtx() {

}

void CVideoOpt::initAvParser() {

}

void CVideoOpt::openAvcodec() {

}

void CVideoOpt::parseAvParse() {

}

void CVideoOpt::videoDecode() {

}

