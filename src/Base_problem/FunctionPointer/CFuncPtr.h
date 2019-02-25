//
// Created by st007 on 19-2-20.
//

#ifndef DESIGNPATTERN_CFUNCPTR_H
#define DESIGNPATTERN_CFUNCPTR_H

//放到上面因为CFuncPtr没有识别，只能放到 类下面
//double (CFuncPtr::*pf)(int);

class CFuncPtr {
public:
    CFuncPtr();
    ~CFuncPtr();

    double betsy(int lns);
    double pam(int lns);

    //the second argument is pointer to a type double function that
    //takes a type int argument
    void estimate(int lines, double (CFuncPtr::*pf)(int));

    void showRes();


    //arfupt
    //various notation, same signatures
    const double* f1(const double ar[], int n);
    const double* f2(const double [], int);
    const double* f3(const double *, int);
    void showArfupt();
protected:

private:

};

//只能放到 类下面
//typedef double (CFuncPtr::*pf)(int);

#endif //DESIGNPATTERN_CFUNCPTR_H
