#ifndef __Kysu__
#define __Kysu__

#include <iostream>
#include <stdio.h>
#include <string.h>
#include "Canbo.h"
#include "include.h"

class Kysu : public CanBo
{
private:
    string TrainingIndustry;
public:
    string setTrain(string training);
    string getTrain();
    virtual void print();
    Kysu(string name, int age, string gender, string address, string train )
    :CanBo(name, age, gender, address)
    {
        this->setTrain(train);
    }
    ~Kysu(){}
};


#endif