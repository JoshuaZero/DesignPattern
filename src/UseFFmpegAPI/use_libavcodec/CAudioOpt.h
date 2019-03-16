//
// Created by st007 on 19-3-6.
//

#ifndef DESIGNPATTERN_CAUDIOOPT_H
#define DESIGNPATTERN_CAUDIOOPT_H

#include "CUseAvCodec.h"

class CAudioOpt : CUseAvCodec{
public:
    CAudioOpt();
    virtual ~CAudioOpt();

    virtual void initialize();
    virtual void openSrcFile(std::string fileIn, std::string mode);
    virtual void saveDesFile(std::string fileIn, std::string mode);
    virtual void allocResource();
    virtual void freeResource();
    virtual void decodeData();
    virtual void encodeData();

    virtual void setCoDecID(enum AVCodecID id);
protected:

private:

};


#endif //DESIGNPATTERN_CAUDIOOPT_H
