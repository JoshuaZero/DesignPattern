//
// Created by st007 on 19-1-30.
//

#ifndef DESIGNPATTERN_CABSTRACTION_H
#define DESIGNPATTERN_CABSTRACTION_H


class CAbstraction {
public:
    virtual ~CAbstraction();
    virtual void Operation() = 0;
protected:
    CAbstraction();

private:

};


#endif //DESIGNPATTERN_CABSTRACTION_H
