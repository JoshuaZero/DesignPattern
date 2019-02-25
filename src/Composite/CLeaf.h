//
// Created by st007 on 19-2-1.
//

#ifndef DESIGNPATTERN_CLEAF_H
#define DESIGNPATTERN_CLEAF_H


#include "CComponent_pos.h"

class CLeaf : public CComponent_pos{
public:
    CLeaf();
    ~CLeaf();

    void Operation();
protected:

private:

};


#endif //DESIGNPATTERN_CLEAF_H
