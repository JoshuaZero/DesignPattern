//
// Created by st007 on 19-2-22.
//

#include "CStack.h"

CStack::CStack() {
    top = 0;
}

CStack::~CStack() {

}

bool CStack::isempty() const {
    return top == 0;
}

bool CStack::isfull() const {
    return top == MAX;
}

bool CStack::push(const Item &item) {
    if(top < MAX){
        items[top++] = item;
        return true;
    }
    else
        return false;
}

bool CStack::pop(Item &item) {
    if(top > 0){
        item = items[--top];
        return true;
    }
    else
        return false;
}