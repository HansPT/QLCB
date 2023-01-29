#include "Kysu.h"
#include "include.h"

string Kysu::setTrain(string training)
{
    TrainingIndustry = training;
    return TrainingIndustry;
}

string Kysu::getTrain()
{
    return TrainingIndustry;
}

void Kysu::print()
{
    cout << "------------------------------\n";
    cout << "Full Name: " << m_fullname << '\n';
    cout << "Age: " << m_age << '\n';
    cout << "Gender: " << m_gender << '\n';
    cout << "Address: " << m_address << '\n';
    cout << "Training: " << TrainingIndustry << '\n';
}