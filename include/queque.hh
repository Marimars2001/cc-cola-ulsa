#include "node.hh"
#pragma once

class Queque
{
    private:
        Node* head{nullptr};
        Node* last{nullptr};
    public:
        Queque();
        ~Queque();
        void Add(Person*& person);
        bool IsEmpty() const;
        void Print();
        void Pop();
        void Clear();
};