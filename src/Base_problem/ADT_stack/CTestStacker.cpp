//
// Created by st007 on 19-2-22.
//
#include <iostream>
#include <cctype>
#include "CStack.h"
#include "CTestStacker.h"

CTestStacker::CTestStacker() {

}

CTestStacker::~CTestStacker() {

}

void CTestStacker::showStacker() {
    //create a empty stack
    CStack st;
    char ch;
    //po只能写数字，写字符的话会出现问题
    unsigned long po;
    std::cout << "Please enter A to add a purchase order,\n"
              << "P to process a PO, or Q to quit."<< std::endl;
    while((std::cin >> ch) && (toupper(ch) != ('Q'))){
        while(std::cin.get() != '\n')
            continue;
        if(!isalpha(ch)){
            std::cout << '\a';
            continue;
        }
        switch (ch){
            case 'A':
            case 'a':std::cout << "Enter a PO number to add:";
                     std::cin >> po;
                     if(st.isfull()){
                         std::cout << "stack already full" << std::endl;
                     }
                     else{
                         st.push(po);
                         std::cout << "PO #" << po <<"pushed." << std::endl;
                     }
                break;
            case 'P':
            case 'p':if(st.isempty()){
                        std::cout << "stack already empty" << std::endl;
                    }
                    else{
                        st.pop(po);
                        std::cout << "PO #" << po << "popped" << std::endl;
                    }
                break;
        }
        std::cout << "Please enter A to add a purchase order, \n"
                  << "P to process a PO, or Q to quit."<< std::endl;
    }
    std::cout << "Byb" << std::endl;
}