//
// Created by st007 on 19-3-8.
//

#ifndef DESIGNPATTERN_CEXCEPTION_H
#define DESIGNPATTERN_CEXCEPTION_H

#include <sstream>
#include <exception>

#define EXCEPTION_POSITION CException::position(__FUNCTION__, __FILE__, __LINE)

class CException: public std::exception {
public:
    CException();

    CException(const std::string & instr)throw();
    //拷贝复制
    CException(CException & e);
    //右值引用
    CException(CException && e);

    virtual ~CException();

    static std::string position(const char* func, const char* file, int line);

    virtual const char* what() const throw();

    std::string & what();

protected:
    std::stringstream & ss();

    void seal();

public:
    static const std::string ERROR;

private:
    //std::ostream m_os;
    std::string m_what;
    std::stringstream m_ss;


};


#endif //DESIGNPATTERN_CEXCEPTION_H
