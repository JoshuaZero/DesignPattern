//
// Created by st007 on 19-1-28.
//

#ifndef DESIGNPATTERN_CCONCRETEPROTOTYPE_H
#define DESIGNPATTERN_CCONCRETEPROTOTYPE_H

#include "./CPrototype.h"

class CConcreteProtoType :public CPrototype{
public:
    CConcreteProtoType();
    CConcreteProtoType(const CConcreteProtoType& cp);
    ~CConcreteProtoType();

    CPrototype* Clone() const;
protected:

private:

};


#endif //DESIGNPATTERN_CCONCRETEPROTOTYPE_H
