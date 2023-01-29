#include "Nhanvien.h"

std::string Nhanvien::setjob(const std::string job)
{
    m_job = job;
    return m_job;
}
std::string Nhanvien::getjob(const std::string job)
{
    return m_job;
}

void Nhanvien::print()
{
    cout << "------------------------------\n";
    cout << "Full Name: " << m_fullname << '\n';
    cout << "Age: " << m_age << '\n';
    cout << "Gender: " << m_gender << '\n';
    cout << "Address: " << m_address << '\n';
    cout << "Job: " << m_job << '\n';
}