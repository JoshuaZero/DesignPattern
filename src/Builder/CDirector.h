//
// Created by st007 on 19-1-28.
//

#ifndef DESIGNPATTERN_CDIRECTOR_H
#define DESIGNPATTERN_CDIRECTOR_H

#include "./CBuilder.h"


class CDirector {
public:
    CDirector(CBuilder* bld);
    ~CDirector();
    void Construct();
protected:

private:
    CBuilder* m_bld;
};


#endif //DESIGNPATTERN_CDIRECTOR_H
