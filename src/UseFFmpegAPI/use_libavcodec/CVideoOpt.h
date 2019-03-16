//
// Created by st007 on 19-3-8.
//

#ifndef DESIGNPATTERN_CVIDEOOPT_H
#define DESIGNPATTERN_CVIDEOOPT_H


#include "CUseAvCodec.h"

class CVideoOpt: CUseAvCodec {
public:
    CVideoOpt();
    virtual ~CVideoOpt();

    virtual void initialize();
    virtual void openSrcFile(std::string fileIn, std::string mode);
    virtual void saveDesFile(std::string fileOut, std::string mode);
    virtual void allocResource();
    virtual void freeResource();
    virtual void decodeData();
    virtual void encodeData();

    virtual void setCoDecID(enum AVCodecID id);
protected:

private:
    void allocAvPacket();
    void allocAvframe();
    void initAvParser();
    void allocAvcodecCtx();
    void openAvcodec();
    void parseAvParse();
    void videoDecode();

private:
    std::string m_desFileName;
    std::string m_srcFileName;
    FILE *m_srcFile;
    FILE *m_desFile;
    const AVCodec *m_codec = NULL;
    AVCodecContext *m_codecCtx = NULL;
    AVCodecParserContext *m_parserCtx = NULL;
    AVPacket *m_pkt = NULL;
    AVFrame *m_decFrame = NULL;

//    int len, ret;
//    uint8_t inbuf[AUDIO_INBUF_SIZE + AV_INPUT_BUFFER_PADDING_SIZE];
//    uint8_t *data;
//    size_t   data_size;

};


#endif //DESIGNPATTERN_CVIDEOOPT_H
