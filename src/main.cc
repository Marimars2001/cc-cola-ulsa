#include <iostream>

int main()
{
    Person* person1{new Person("Jesus", 29)};
    Person* person2{new Person("Miguel", 20)};
    Person* person3{new Person("Hernesto", 19)};
    Person* person4{new Person("María", 19)};
    Person* person5{new Person("Antonio", 13)};
    Person* person6{new Person("Ana", 37)};

    std::cout << "Queque" << std::endl;
    std::cout << std::endl;
    Queque* queque{new Queque()};

    queque->Add(person1);
    queque->Add(person2);
    queque->Add(person3);
    queque->Add(person4);
    queque->Add(person5);
    queque->Add(person6);
    
    queque->Print();
    queque->Pop();
    Queque->Print();
    queque->Add(person1);
    Queque->Print();

    std::cin.get();
    return EXIT_SUCCESS;
}