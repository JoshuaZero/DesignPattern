//
// Created by st007 on 19-2-20.
//
#include <iostream>
#include "CFuncPtr.h"


CFuncPtr::CFuncPtr() {

}

CFuncPtr::~CFuncPtr() {

}

double CFuncPtr::betsy(int lns) {
    return 0.05 * lns;
}

double CFuncPtr::pam(int lns) {
    return 0.03*lns + 0.0004*lns*lns;
}

//void CFuncPtr::estimate(int lines, double (CFuncPtr::*pf)(int)) {
void CFuncPtr::estimate(int lines, double (CFuncPtr::*pf)(int)) {
    std::cout << lines << "lines will take" << std::endl;
    std::cout << (this->*pf)(lines) << "hour(s)" << std::endl;
}

void CFuncPtr::showRes() {
    int code;
    std::cout << "How many lines of code do you need?" << std::endl;
    std::cin >> code;
    std::cout << "Here's Betsy's estimate:" << std::endl;
    estimate(code, &CFuncPtr::betsy);//
    std::cout << "Hers's Pam's estimate:" << std::endl;
    estimate(code, &CFuncPtr::pam);
}


const double* CFuncPtr::f1(const double *ar, int n) {
    return ar;
}

const double* CFuncPtr::f2(const double ar[], int n) {
    return ar + 1;
}

const double* CFuncPtr::f3(const double ar[], int n) {
    std::cout << "the array pointer %p = " << (&ar+1) << std::endl;
    return ar + 2;
}

void CFuncPtr::showArfupt() {
    double ad[3] = {1112.3, 1542.6, 2227.9};
    //pointer to a function
    const double *(CFuncPtr::*p1)(const double *, int) = &CFuncPtr::f1;
    //c++11 automatic type deduction
    auto p2 = &CFuncPtr::f2;
    //pre-C++ can use the following code instead
    //const double *(*p2)(const double *, int) = f2;
    std::cout << "Using pointers to functions: " << std::endl;
    std::cout << "Address Value " << std::endl;
    std::cout << (this->*p1)(ad,3) << ":" << *(this->*p1)(ad,3) << std::endl;
    //std::cout << p2(ad,3) << ":" <<*p2(ad, 3) << std::endl;   //不能此形式调用
    std::cout << (this->*p2)(ad,3) << ":" <<*(this->*p2)(ad, 3) << std::endl;

    //pa an array of pointers
    //auto doesn't work with list initialization
    const double *(CFuncPtr::*pa[3])(const double *, int) = {&CFuncPtr::f1, &CFuncPtr::f2, &CFuncPtr::f3};
    //but it does work for initializing to a single value
    //pb a pointer to first element of pa
    auto pb = pa;
    //pre-C++11 can use the following code instead
    //const double *(**pb)(const double *, int) = pa;
    std::cout << "\n Using an array of pointers to functions:" << std::endl;
    std::cout << "Address Value" << std::endl;
    for (int i = 0; i < 3; ++i) {
        //std::cout << pa[i](ad,3) << ":" << *pa[i](ad,3) << std::endl;  //此形式调用不可以
        std::cout << (this->*pa[i])(ad,3) << ":" << *(this->*pa[i])(ad,3) << std::endl;
    }
    std::cout << "\n Using a pointer to a pointer to a function:" << std::endl;
    std::cout << "Address Value" << std::endl;
    for (int j = 0; j < 3; ++j) {
        std::cout << (this->*pb[j])(ad, 3) << ":" << *(this->*pb[j])(ad, 3) << std::endl;
    }
    //what about a pointer to an array of function pointers
    std::cout << "\n Using pointers to an array of pointers:" << std::endl;
    std::cout << "Address Value" << std::endl;
    //easy way to declare pc
    auto pc = &pa;
    //pre-C++11 can use the following code instead
    //const double *(*(*pc)[3])(const double *, int) = &pa;
    //std::cout << (*pc)[0](ad, 3) << ":" << *(*pc)[0](ad, 3) << std::endl;  //此调用不可以
    std::cout << (this->*(*pc)[0])(ad, 3) << ":" << (this->*(*pc)[0])(ad, 3) << std::endl;
    //hard way to declare pd
    const double *(CFuncPtr::*(*pd)[3])(const double *, int) = &pa;
    //store return value in pdb
    //const double * pdb = (*pd)[1](ad, 3); //此调用不可以
    const double * pdb = (this->*(*pd)[1])(ad, 3);
    std::cout << pdb << ":" << *pdb << std::endl;
    //alternative notation
    //std::cout << *(*pd)[2](ad, 3) << ":" << *(*(*pd)[2])(ad, 3) << std::endl;  /此调任无效
    std::cout << (this->*(*pd)[2])(ad, 3) << ":" << *(this->*(*pd)[2])(ad, 3) << std::endl;
    //std::cin.get();
}