//
// Created by st007 on 19-3-8.
//
#include <exception>
#include <iostream>
#include "CException.h"

const std::string CException::ERROR = "ERR:";

CException::CException() {

}

CException::CException(CException & e) {
    m_what.swap(e.m_what);
}

CException::CException(CException && e) {
    m_what.swap(e.m_what);
}

CException::CException(const std::string & instr) throw() {
    ss() << ERROR << instr << std::endl;
}

CException::~CException() {

}

const char* CException::what() const throw(){
    return m_what.c_str();
}

std::string & CException::what() {
    return m_what;
}

void CException::seal() {
    m_ss.str().swap(m_what);
}

std::stringstream & CException::ss() {
    return m_ss;
}
