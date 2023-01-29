#include <string>
#include <iostream>
#include "Congnhan.h"
#include "include.h"

int CongNhan::setLevel(int level)
{
    if (level <= 0 || level > 10)
    {
        m_level = 1;
        return m_level;
    }
    else
    {
        m_level = level;
        return m_level;
    }
}
int CongNhan::getLevel()
{
    return m_level;
}
void CongNhan::print()
{
    cout << "------------------------------\n";
    cout << "Full Name: " << m_fullname << '\n';
    cout << "Age: " << m_age << '\n';
    cout << "Gender: " << m_gender << '\n';
    cout << "Address: " << m_address << '\n';
    cout << "Level: " << m_level << '\n';
}