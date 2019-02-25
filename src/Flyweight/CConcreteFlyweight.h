//
// Created by st007 on 19-2-1.
//

#ifndef DESIGNPATTERN_CCONCRETEFLYWEIGHT_H
#define DESIGNPATTERN_CCONCRETEFLYWEIGHT_H

#include "CFlyweight.h"

class CConcreteFlyweight :public CFlyweight{
public:
    CConcreteFlyweight(std::string intrinsicState);
    ~CConcreteFlyweight();
    void Operation(const std::string & extrinsicState);
protected:

private:

};


#endif //DESIGNPATTERN_CCONCRETEFLYWEIGHT_H
