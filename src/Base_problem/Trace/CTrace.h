//
// Created by st007 on 19-4-20.
//

#ifndef DESIGNPATTERN_CTRACE_H
#define DESIGNPATTERN_CTRACE_H

#include <string>

class CTrace {
public:
    CTrace();
    ~CTrace();

    void debug(const std::string &msg);


protected:

private:
    void isTraceActivite();

public:
    bool isTraceActive;

};


#endif //DESIGNPATTERN_CTRACE_H
