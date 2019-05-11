//
// Created by st007 on 19-3-8.
//

#ifndef DESIGNPATTERN_CUSENEWCPP_H
#define DESIGNPATTERN_CUSENEWCPP_H


class CUseNewCPP {
public:
    //CUseNewCPP getCUserCPPInstance();
    CUseNewCPP();
    CUseNewCPP(const CUseNewCPP & cst);
    ~CUseNewCPP();
protected:

private:
    int m_contstructCnt = 0;
    int m_copyConstructCnt = 0;
    int m_destructCnt = 0;
};


#endif //DESIGNPATTERN_CUSENEWCPP_H
