//
// Created by st007 on 19-3-5.
//

#ifndef DESIGNPATTERN_CSTRINGBAD_H
#define DESIGNPATTERN_CSTRINGBAD_H


#include <iosfwd>

class CStringBad {
public:
    CStringBad();
    CStringBad(const char* s);
    CStringBad(const CStringBad &);  //copy constructor
    ~CStringBad();

    const int getlength()const;

    friend std::ostream& operator<<(std::ostream &os, const CStringBad &st);
    friend std::istream& operator>>(std::istream &is, CStringBad &st);

    friend bool operator<(const CStringBad &st, const CStringBad &st2);
    friend bool operator>(const CStringBad &st1, const CStringBad &st2);
    friend bool operator==(const CStringBad &st, const CStringBad &st2);

    char & operator[](int i);
    const char &operator[](int i)const;

    CStringBad &operator=(const CStringBad &);
    CStringBad &operator=(const char*);

    static int HowMany();

protected:

private:

private:
    char* strname;
    int length;
    static int num_strings;
    static const int CINLIM = 80;
};


#endif //DESIGNPATTERN_CSTRINGBAD_H
