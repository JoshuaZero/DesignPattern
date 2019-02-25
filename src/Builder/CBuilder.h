//
// Created by st007 on 19-1-28.
//

#ifndef DESIGNPATTERN_CBUILDER_H
#define DESIGNPATTERN_CBUILDER_H

#include <string>
#include "CProductBuild.h"

class CBuilder {
public:

    virtual ~CBuilder();

    virtual void BuildPartA(const std::string& buildPara) = 0;
    virtual void BuildPartB(const std::string& buildPara) = 0;
    virtual void BuildPartC(const std::string& buildPara) = 0;
    virtual CProductBuild* GetProduct() = 0;
protected:
    CBuilder();

private:

};


#endif //DESIGNPATTERN_CBUILDER_H
