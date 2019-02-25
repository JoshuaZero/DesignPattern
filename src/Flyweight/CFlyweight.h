//
// Created by st007 on 19-2-1.
//

#ifndef DESIGNPATTERN_CFLYWEIGHT_H
#define DESIGNPATTERN_CFLYWEIGHT_H

#include <string>

class CFlyweight {
public:
    virtual ~CFlyweight();
    virtual void Operation(const std::string& extrinsicState);
    std::string GetIntrinsicState();
protected:
    CFlyweight(std::string intrinsicState);
private:
    std::string m_intrinsicState;
};


#endif //DESIGNPATTERN_CFLYWEIGHT_H
