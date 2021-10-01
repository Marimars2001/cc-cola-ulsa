#include "node.hh"

Node::Node(Person*& person)
{
    this->person = person;
}

Node::~Node()
{
}