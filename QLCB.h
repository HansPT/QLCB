#ifndef __QLCB__
#define __QLCB__

#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
#include "Canbo.h"
#include "include.h"


class QLCB
{
private:
    vector <CanBo*> m_list;

public:
    void add(CanBo* a);
    void search(string& name);
    void printCanBo();
    QLCB()
    {

    }

    ~QLCB()
    {
        for (CanBo *cb : m_list)
        {
            if(cb)
            {
                delete cb;
                
            }
            
        }
            
    }
    // auto* list();
};



#endif