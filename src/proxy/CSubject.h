//
// Created by st007 on 19-2-11.
//

#ifndef DESIGNPATTERN_CSUBJECT_H
#define DESIGNPATTERN_CSUBJECT_H


class CSubject {
public:
    virtual ~ CSubject();
    virtual void Request() = 0;
protected:
    CSubject();
private:

};


#endif //DESIGNPATTERN_CSUBJECT_H
