//
// Created by st007 on 19-1-31.
//

#ifndef DESIGNPATTERN_CADAPTER_OBJ_H
#define DESIGNPATTERN_CADAPTER_OBJ_H


#include "CTarget_obj.h"

class CAdaptee_obj;

class CAdapter_obj : public CTarget_obj{
public:
    CAdapter_obj(CAdaptee_obj* ade);
    ~CAdapter_obj();
    void Request();
protected:

private:
    CAdaptee_obj* m_ade;
};


#endif //DESIGNPATTERN_CADAPTER_OBJ_H
