//
// Created by st007 on 19-2-18.
//

#ifndef DESIGNPATTERN_CRECURES_H
#define DESIGNPATTERN_CRECURES_H


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
