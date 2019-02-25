//
// Created by st007 on 19-2-16.
//test the system limits of the type
//for examples how much bytes to explain the short、 int、 long and so on
//use the #include <climits> for older systems
//

#ifndef DESIGNPATTERN_CLIMITS_H
#define DESIGNPATTERN_CLIMITS_H

#include <iostream>
#include <climits>

class CLimits {
public:
    CLimits(){}
    ~CLimits(){}
    void showType();
protected:

private:
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;
};


#endif //DESIGNPATTERN_CLIMITS_H
