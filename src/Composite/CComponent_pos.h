//
// Created by st007 on 19-2-1.
//

#ifndef DESIGNPATTERN_CCOMPONENT_POS_H
#define DESIGNPATTERN_CCOMPONENT_POS_H


class CComponent_pos {
public:
    CComponent_pos();
    virtual ~CComponent_pos();

public:
    virtual void Operation() = 0;
    virtual void Add(const CComponent_pos& );
    virtual void Remove(const CComponent_pos& );
    virtual CComponent_pos* GetChild(int);
protected:

private:

};


#endif //DESIGNPATTERN_CCOMPONENT_POS_H
