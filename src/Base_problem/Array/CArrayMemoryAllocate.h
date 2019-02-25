//
// Created by st007 on 19-2-18.
//

#ifndef DESIGNPATTERN_CARRAYMEMORYALLOCATE_H
#define DESIGNPATTERN_CARRAYMEMORYALLOCATE_H


class CArrayMemoryAllocate {
public:
    CArrayMemoryAllocate(){

    }
    ~CArrayMemoryAllocate(){};

    void ShowMemAllocate();
protected:

private:
    int m_arr[3][4] = {};

};


#endif //DESIGNPATTERN_CARRAYMEMORYALLOCATE_H
