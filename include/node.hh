#pragma once
#include "person.hh"

class Node
{
    private:
        Person* person{};
    public:
        Node(Person*& person);
        ~Node();
        Node* next{};
        Person* GetPerson() const;
};