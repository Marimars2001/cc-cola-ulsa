#include "person.hh"

Person::Person(std::string name, unsigned int age)
{
    this->name = name;
    this->age = age;
}

Person::~Person()
{
}

std::string Person::GetName() const
{
    return name;
}

unsigned int Person::GetAge() const
{
    return age;
}