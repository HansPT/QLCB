#ifndef __CANBO__
#define __CANBO__

#include <iostream>
#include <stdio.h>
#include <string.h>
#include "include.h"

class CanBo
{
protected:
    string m_fullname;
    int m_age;
    string m_gender;
    string m_address;
public:
    string setName(const string fullname);
    string getName();
    int setAge(int age);
    int getAge();
    string setGender(const string gender);
    string getGender();
    string setAddress(const string address);
    string getAddress();
    virtual void print();
    CanBo(string fullname, int age, string gender, string address)
    {
        this->setName(fullname);
        this->setAge(age);
        this->setGender(gender);
        this->setAddress(address);
    }
    // ~CanBo(){}
    // ~CanBo(){}
    virtual ~CanBo(){}

};

#endif 
