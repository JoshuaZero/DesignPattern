//
// Created by st007 on 19-1-30.
//

#ifndef DESIGNPATTERN_CABSTRACTIONIMP_H
#define DESIGNPATTERN_CABSTRACTIONIMP_H


class CAbstractionImp {
public:
    virtual ~CAbstractionImp();
    virtual void Operation() = 0;
protected:
    CAbstractionImp();
private:

};


#endif //DESIGNPATTERN_CABSTRACTIONIMP_H
