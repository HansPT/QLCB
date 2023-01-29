#include "QLCB.h"
#include <vector>
#include <iostream>
#include <stdio.h>
#include "include.h"

void QLCB::add(CanBo* a)
{
    m_list.push_back(a);
}

void QLCB::search(string& name)
{
    for( CanBo* a : m_list )
    {
        if(a->getName() == name)
        {
            a->print();
            // break;
        }
        else if(a->getName() != name)
        {
            cout << "null\n";
            // break;
        }
    }
}

void QLCB::printCanBo()
{
    for (int i = 0; i < m_list.size(); i++)
    {
        m_list[i]->print();
    }
    
}

// auto* QLCB::list()
// {
//     m_list;
// }