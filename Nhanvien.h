#ifndef __Nhanvien__
#define __Nhanvien__

#include "Canbo.h"
#include <string.h>

class Nhanvien : public CanBo
{

private:
    std::string m_job;
public:
    std::string setjob(const std::string job);
    std::string getjob(const std::string job);
    virtual void print();

    Nhanvien( string name, int age, string gender, string address, string job)
    :CanBo(name, age, gender, address)
    {
        this->setjob(job);
    }
    ~Nhanvien(){}
};


#endif