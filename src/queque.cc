#include <iostream>
#include "queque.hh"

Queque::Queque()
{
}

Queque::~Queque()
{
}

void Queque::Add(Person*& person)
{
    if(IsEmpty())
    {
        head = new Node(person);
    }
    else
    {
        if(head != nullptr && last == nullptr)
        {
            last = new Node(person);
            head->next = last;
        }
        else
        {
            Node* currentLast{last};
            last = new Node(person);
            currentLast->next = last;
        }
    }
}

void Queque::Pop()
{
    if(IsEmpty())
    {
        std::cout << "Queque is empty" << std::endl;
    }
    else
    {
        if(head != nullptr && last == nullptr)
        {
            delete head;
        }
        else
        {
            Node* currentHead{head};
            head = head->next;
            delete currentHead;
            if(IsEmpty())
            {
                delete last;
                delete head;
            }
        }
    }
}

bool Queque::IsEmpty() const
{
    return head == nullptr;
}

void Queque::Print()
{
    if(IsEmpty)
    {
        std::cout << "Queque is empty" << std::endl; 
        return;   
    }
    std::cout << "Queque elements: " << std::endl;
    std::cout << std::endl;
    Node* currentNode{head};

    while(currentNode->next)
    {
        std::cout << "Name: " << currentNode->GetPerson()->GetName() << std::endl;
        std::cout << "Age: " << currentNode->GetPerson()->GetAge() << std::endl;
        std::cout << std::endl;
        currentNode = currentNode->next;
    }
    delete currentNode;
}

void Queque::Clear()
{
    while(!IsEmpty())
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    delete last;
}