
#include <iostream>
#include <stdio.h>
#include "Canbo.h"
#include "include.h"

string CanBo::setName(const string fullname)
{
    m_fullname = fullname;
    return m_fullname;
}

string CanBo::getName()
{
    return m_fullname;
}

int CanBo::setAge(int age)
{
    if(age <=0)
    {
        m_age =  1;
        return m_age;
    }
    else 
    {
        m_age = age;
        return m_age;
    }
}

int CanBo::getAge()
{
    return m_age;
}

string CanBo::setGender(const string gender)
{
    m_gender = gender;
    return m_gender;
}
string CanBo::getGender()
{
    return m_gender;
}
string CanBo::setAddress(const string address)
{
    m_address = address;
    return m_address;
}
string CanBo::getAddress()
{
    return m_address;
}

void CanBo::print()
{
    cout << "------------------------------\n";
    cout << "Fullname: " << m_fullname << '\n';
    cout << "Gender: " << m_gender << '\n';
    cout << "Address: " << m_address << '\n';
    cout << "Age of Canbo: " << m_age << '\n';
}

// CanBo::CanBo(string fullname, int age, string gender, string address)
// {
//     m_fullname = fullname;
//     m_age = age;
//     m_gender = gender;
//     m_address = address;
// }

