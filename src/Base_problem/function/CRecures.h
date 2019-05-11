//
// Created by st007 on 19-2-18.
//

#ifndef DESIGNPATTERN_CRECURES_H
#define DESIGNPATTERN_CRECURES_H

#include <iostream>

struct A{};
struct B{};

template<typename T = A>
struct X;

template <>
struct X<A>{
    static void f(){std::cout << 1 << std::endl;}
};
template <>
struct X<B>{
    static void f(){std::cout << 2 << std::endl;}
};
template<template <typename T = B> class C>
void g(){C<>::f();}


class CRecures {
public:
    CRecures(){
        m_cont = 0;
    }
    ~CRecures(){}

    void showRes();
    void countdown(int n);
    void subdivide(char ar[], int low, int high, int level);




protected:

private:
    int m_cont;
    const int Len = 66;
    const int Divs = 6;
};


#endif //DESIGNPATTERN_CRECURES_H
