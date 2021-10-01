#pragma once
#include <string>

class Person
{
    private:
        std::string name;
        unsigned int age;
    public:
        Person(std::string name, unsigned int age);
        ~Person();
        std::string GetName() const;
        unsigned int GetAge() const;
};