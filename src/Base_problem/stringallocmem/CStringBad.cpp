//
// Created by st007 on 19-3-5.
//

#include <cstring>
#include <iostream>
#include "CStringBad.h"

int CStringBad::num_strings = 0;

CStringBad::CStringBad() {
    length = 4;
    strname = new char[4];
    std::strcpy(strname, "c++11");
    num_strings++;
    std::cout << num_strings << ":\"" << strname << "\"object created" << std::endl;
}

CStringBad::CStringBad(const char *s) {
    //在头文件cstring中
    length = std::strlen(s);
    strname = new char[length+1];
    std::strcpy(strname, s);
    num_strings++;
    std::cout << num_strings << ":\"" << strname << "\"object created" << std::endl;
}

CStringBad::~CStringBad() {
    std::cout << "\"" << strname << "\" object created, ";
    --num_strings;
    std::cout << num_strings << "left";
    delete [] strname;
}

const int CStringBad::getlength() const {
    return length;
}

int CStringBad::HowMany() {
    return num_strings;
}

bool operator< (const CStringBad &st, const CStringBad &st2) {
    if(std::strcmp(st.strname, st2.strname) < 0){
        return true;
    }
    else
        return false;
}

bool operator>(const CStringBad &st1, const CStringBad &st2) {
    return st2 < st1;
}

bool operator==(const CStringBad &st, const CStringBad &st2) {
    return (std::strcmp(st.strname, st2.strname) == 0);
}

std::ostream& operator<<(std::ostream &os, const CStringBad &st) {
    os << st.strname;
    return os;
}

std::istream& operator>>(std::istream &is, CStringBad &st) {
    char temp[CStringBad::CINLIM];
    is.get(temp, CStringBad::CINLIM);
    if(is)
        st.strname = temp;
    while(is && is.get() != '\n')
        continue;
    return is;
}

//assign CStringBad to CStringBad
CStringBad& CStringBad::operator=(const CStringBad & st) {
    if(this == &st)
        return *this;
    delete [] strname;
    length = st.length;
    strname = new char[length+1];
    std::strcpy(strname, st.strname);
    return *this;
}

//assign a c cstring to a CStringBad
CStringBad& CStringBad::operator=(const char * s) {
    delete [] strname;
    length = std::strlen(s);
    strname = new char[length+1];
    std::strcpy(strname,s);
    return *this;
}

//read-write char access for non-const CStringBad
char& CStringBad::operator[](int i) {
    return strname[i];
}

//read-only char access for const CStringBad
const char& CStringBad::operator[](int i) const {
    return strname[i];
}

