//
// Created by st007 on 19-2-1.
//

#ifndef DESIGNPATTERN_CCOMPOSITE_H
#define DESIGNPATTERN_CCOMPOSITE_H

#include <vector>
#include "CComponent_pos.h"

class CComposite : public CComponent_pos{
public:
    CComposite();
    ~CComposite();

public:
    void Operation();
    void Add(CComponent_pos* com);
    void Remove(CComponent_pos* com);
    CComponent_pos* GetChild(int index);
protected:

private:
    std::vector<CComponent_pos*> comVec;
};


#endif //DESIGNPATTERN_CCOMPOSITE_H
