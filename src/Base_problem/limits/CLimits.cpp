//
// Created by st007 on 19-2-16.
//

#include "CLimits.h"

void CLimits::showType() {
    
    std::cout << "sizeof operator yields size of type or of variable"<< std::endl;
    std::cout << "char is " << sizeof(char) << "bytes." << std::endl;
    std::cout << "int is " << sizeof(int) << "bytes." << std::endl;
    std::cout << "short is " << sizeof(short) << "bytes." << std::endl;
    std::cout << "long is " << sizeof(long) << "bytes." << std::endl;
    std::cout << "long long is " << sizeof(long long) << "bytes." << std::endl;
    std::cout << std::endl;

    std::cout << "Maximun values:" << std::endl;
    std::cout << "int:" << n_int << std::endl;
    std::cout << "short:" << n_short << std::endl;
    std::cout << "long:" << n_long << std::endl;
    std::cout << "long long:" << n_llong << std::endl;
    std::cout << std::endl;

    std::cout << "Minimun int value = " << INT_MIN<< std::endl;
    std::cout << "Bits per byte = " << CHAR_BIT << std::endl;
    std::cout << "Minimun short value = " << SHRT_MIN << std::endl;
    std::cout << "Minimun long value = " << LONG_MIN << std::endl;
    std::cout << "Minimun llong value = " << LLONG_MIN << std::endl;
}