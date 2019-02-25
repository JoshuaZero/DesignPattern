//
// Created by st007 on 19-1-28.
//

#ifndef DESIGNPATTERN_CCONCRETEBUILDER_H
#define DESIGNPATTERN_CCONCRETEBUILDER_H

#include <string>
#include "./CBuilder.h"


class CConcreteBuilder: public CBuilder {
public:
    CConcreteBuilder();
    ~CConcreteBuilder();
    void BuildPartA(const std::string& buildPara);
    void BuildPartB(const std::string& buildPara);
    void BuildPartC(const std::string& buildPara);
    CProductBuild* GetProduct();
protected:

private:

};


#endif //DESIGNPATTERN_CCONCRETEBUILDER_H
