#include <iostream>

///ALL animals should have this interface to make an array using polymorphism, I don't know how else make the array
class IContainer{};

///Template for animals
class IAnimal
{
    public:
        std::string name;
        std::string species;
        int age;
        std::string habitat;
    private:
        virtual void makeSound() const = 0;
        virtual void feed() const = 0;

};

///Interface for endangered species
class IEndangered
{
    virtual void monitorStatus() const = 0;
};

int main()
{
    IContainer animals[8]; ///array of animals
    return 0;
}

