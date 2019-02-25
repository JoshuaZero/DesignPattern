//
// Created by st007 on 19-1-28.
//

#ifndef DESIGNPATTERN_CPROTOTYPE_H
#define DESIGNPATTERN_CPROTOTYPE_H


class CPrototype {
public:
    virtual ~CPrototype();
    virtual CPrototype* Clone() const = 0;
protected:
    CPrototype();
private:

};


#endif //DESIGNPATTERN_CPROTOTYPE_H
