//
// Created by st007 on 19-1-28.
//

#ifndef DESIGNPATTERN_CSINGLETON_H
#define DESIGNPATTERN_CSINGLETON_H


class CSingleton {
public:
    static CSingleton* Instance();

protected:
    CSingleton();

private:
    static CSingleton* m_Instance;
};


#endif //DESIGNPATTERN_CSINGLETON_H
