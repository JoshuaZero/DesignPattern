//
// Created by st007 on 19-2-1.
//

#ifndef DESIGNPATTERN_CCOMPONENT_H
#define DESIGNPATTERN_CCOMPONENT_H


class CComponent {
public:
    virtual ~CComponent();
    virtual void Operation();
protected:
    CComponent();
private:

};


#endif //DESIGNPATTERN_CCOMPONENT_H
