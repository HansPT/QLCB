#ifndef __CONGNHAN__
#define __CONGNHAN__

#include <iostream>
#include <stdio.h>
#include "Canbo.h"

class CongNhan : public CanBo
{
private:
    int m_level;
public:
    int setLevel(int level);
    int getLevel();
    virtual void print();
    CongNhan(string fullname, int age, string gender, string address, int level)
    : CanBo(fullname, age, gender, address)
    {
        this->setLevel(level);
    }
    ~CongNhan(){}

};

#endif 