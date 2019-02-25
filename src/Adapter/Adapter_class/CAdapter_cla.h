//
// Created by st007 on 19-1-31.
//

#ifndef DESIGNPATTERN_CADAPTER_CLA_H
#define DESIGNPATTERN_CADAPTER_CLA_H


#include "CTarget_cla.h"
#include "CAdaptee_cla.h"

class CAdapter_cla : public CTarget_cla, private CAdaptee_cla{
public:
    CAdapter_cla();
    ~CAdapter_cla();
    void Request();
protected:

private:

};


#endif //DESIGNPATTERN_CADAPTER_CLA_H
