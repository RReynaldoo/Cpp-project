#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

///ALL animals should have this interface to make an array using polymorphism, it will also contain essential methods
class IContainer{
};

///Template for animals, it is abstract so no implementation of methods
class IAnimal
{
    private:
        std::string name;
        std::string species;
        int age;
        std::string habitat;
        int amount = 0; //Number of animals for each species, helps keeping track of how many there are
        virtual void makeSound() const = 0;
        virtual void feed() const = 0;
    public:
        IAnimal()
            setName(name);
            setSpecies(species);
            setAge(age);
            setHabitat(habitat);
        //------------------------------
        //Setters and getters to be inherited to the animals
        void setName(std::string name){
            this->name = name;
        }
        std::string getName(){
            return name;
        }
        //-------------------------------
        void setSpecies(std::string species){
            this->species = species;
        }
        std::string getSpecies(){
            return species;
        }
        //-------------------------------
        void setAge(int age){
            this->age = age;
        }
        int getAge(){
            return age;
        }
        //-------------------------------
        void setHabitat(std::string habitat){
            this->habitat = habitat;
        }
        std::string getHabitat(){
            return habitat;
        }
        //-------------------------------
        int getAmount(){
            return amount;
        }
};

///Interface for endangered species
class IEndangered
{
    virtual void monitorStatus() const = 0;
};


///
///Animals in the zoo-------------------------------------------------
class Lion : public IAnimal, public IEndangered{

};
class Elephant : public IAnimal, public IEndangered{

};
class Axolotl : public IAnimal, public IEndangered{

};
class Giraffe : public IAnimal, public IEndangered{

};
class Zeebra : public IAnimal{

};
class Penguin : public IAnimal{

};
class Sloth : public IAnimal{

};
class OWl : public IAnimal{

};
///------------------------------------------------------------------
///

void AddAnimal(std::string name, std::string species, int age, std::string habitat, std::vector<IAnimal>& zoo)
{
    int amount = 0; //To locally store the amount of animals
    std::string animalID = " ";   //Name that the animal will have within the array

    for (IAnimal animal : zoo){ //Depending on the selection, creates an animal
        switch(animal){
            case "Lion":
                amount = Lion.getAmount();
                animalID = species + amount;
                Lion animalID(name, species, age, habitat);
                zoo.push_back(animalID);
                break;
            case "Elephant":
                amount = Lion.getAmount();
                animalID = species + amount;
                Elephant animalID(name, species, age, habitat);
                zoo.push_back(animalID);
                break;
            case "Axolotl":
                amount = Lion.getAmount();
                animalID = species + amount;
                Axolotl animalID(name, species, age, habitat);
                zoo.push_back(animalID);
                break;
            case "Giraffe":
                amount = Lion.getAmount();
                animalID = species + amount;
                Giraffe animalID(name, species, age, habitat);
                zoo.push_back(animalID);
                break;
            case "Zeebra":
                amount = Lion.getAmount();
                animalID = species + amount;
                Zeebra animalID(name, species, age, habitat);
                zoo.push_back(animalID);
                break;
            case "Penguin":
                amount = Lion.getAmount();
                animalID = species + amount;
                Penguin animalID(name, species, age, habitat);
                zoo.push_back(animalID);
                break;
            case "Sloth":
                amount = Lion.getAmount();
                animalID = species + amount;
                Sloth animalID(name, species, age, habitat);
                zoo.push_back(animalID);
                break;
            case "Owl":
                amount = Lion.getAmount();
                animalID = species + amount;
                Owl animalID(name, species, age, habitat);
                zoo.push_back(animalID);
                break;
            default:
                std::cout << "This should not happen, error in object creation (SWITCH)";
                return 0;
        }
    }
}

void RemoveAnimal(std:string name, std::vector<IAnimal*>& zoo){///Removes an animal
    for(int i = 0; i < zoo.size(); i++){
        if(zoo[i]->getName() == name){
            delete zoo[i];  //bye bye object
            zoo.erase(zoo.begin() + i); //remove pointer from vector
            break;
        }
    }
}

void DisplayAnimals(std::vector<IAnimal*>& zoo){///Displays all the animals
    for(IAnimal animal : zoo){
        std::cout << animal << std::endl;
    }
}


int main()
{
    Lion.age;
    std::vector<IAnimal> zoo;//Container for animals, it can increase in size dinamically.


    return 0;
}
