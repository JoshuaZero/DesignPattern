//
// Created by st007 on 19-3-5.
//

#ifndef DESIGNPATTERN_CUSEAVCODEC_H
#define DESIGNPATTERN_CUSEAVCODEC_H

#include <libavcodec/avcodec.h>
#include <iostream>

class CUseAvCodec {
public:
    CUseAvCodec();
    virtual ~CUseAvCodec();

    virtual void initialize() = 0;

    virtual void openSrcFile(std::string fileIn, std::string mode) = 0;
    virtual void saveDesFile(std::string fileIn, std::string mode) = 0;

    virtual void allocResource() = 0;
    virtual void decodeData() = 0;
    virtual void encodeData() = 0;
    virtual void freeResource() = 0;

    virtual void setCoDecID(enum AVCodecID id) = 0;
protected:

private:

};


#endif //DESIGNPATTERN_CUSEAVCODEC_H
