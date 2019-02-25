//
// Created by st007 on 19-2-11.
//

#ifndef DESIGNPATTERN_CPROXY_H
#define DESIGNPATTERN_CPROXY_H

#include "CSubject.h"

class CProxy {
public:
    CProxy();
    CProxy(CSubject* sub);
    ~CProxy();
    void Request();
protected:

private:
    CSubject* m_sub;
};


#endif //DESIGNPATTERN_CPROXY_H
