//
// Created by st007 on 19-2-22.
//

#ifndef DESIGNPATTERN_CSTACK_H
#define DESIGNPATTERN_CSTACK_H

//根据通用的Item来定义类型，而不是通过固定类型
typedef unsigned long Item;

class CStack {
public:
    //默认构造函数保证所有栈在被创建时都为空。
    CStack();
    ~CStack();

    bool isempty() const;
    bool isfull() const;
    //push returns false if stack already is full, true otherwise
    bool push(const Item &item);    //add item to stack
    //pop returns false if stack already is empty, true otherwise
    bool pop(Item &item);           //pop top into item

protected:


private:
    enum{MAX = 10};     //constant specific to class
    Item items[MAX];    //holds stack items
    int top;            //index for top stack item

};


#endif //DESIGNPATTERN_CSTACK_H
