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
    public:
        IAnimal(std::string name, std::string species, int age, std::string habitat)
            setName(name);
            setSpecies(species);
            setAge(age);
            setHabitat(habitat);
        //------------------------------
        virtual void makeSound() const = 0;
        virtual void feed() const = 0;
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
    using IAnimal::IAnimal;//To call the IAnimal Constructor
    const int FoodRequired = 7;
};
class Elephant : public IAnimal, public IEndangered{
    using IAnimal::IAnimal;//To call the IAnimal Constructor
    const int FoodRequired = 150;
};
class Axolotl : public IAnimal, public IEndangered{
    using IAnimal::IAnimal;//To call the IAnimal Constructor
    const int FoodRequired = 0.01;

};
class Giraffe : public IAnimal, public IEndangered{
    using IAnimal::IAnimal;//To call the IAnimal Constructor
    const int FoodRequired = 30;

};
class Zeebra : public IAnimal{
    using IAnimal::IAnimal;//To call the IAnimal Constructor
    const int FoodRequired = 10;

};
class Penguin : public IAnimal{
    using IAnimal::IAnimal;//To call the IAnimal Constructor
    const int FoodRequired = 10;

};
class Sloth : public IAnimal{
    using IAnimal::IAnimal;//To call the IAnimal Constructor
    const int FoodRequired = 1;

};
class OWl : public IAnimal{
    using IAnimal::IAnimal;//To call the IAnimal Constructor
    const int FoodRequired = 0.3;

};
///------------------------------------------------------------------
///

void AddAnimal(std::string name, std::string species, int age, std::string habitat, std::vector<IAnimal>& zoo)
{
    int amount = 0; //To locally store the amount of animals
    std::string animalID = " ";   //Name that the animal will have within the array


            if(species == "Lion"){
                amount = Lion.getAmount();
                animalID = species + amount;
                Lion animalID(name, species, age, habitat);
                zoo.push_back(animalID);
            }
            if(species == "Elephant" ){
                amount = Lion.getAmount();
                animalID = species + amount;
                Elephant animalID(name, species, age, habitat);
                zoo.push_back(animalID);
                }
            if(species == "Axolotl"){
                amount = Lion.getAmount();
                animalID = species + amount;
                Axolotl animalID(name, species, age, habitat);
                zoo.push_back(animalID);
                }
            if(species == "Giraffe"){
                amount = Lion.getAmount();
                animalID = species + amount;
                Giraffe animalID(name, species, age, habitat);
                zoo.push_back(animalID);
                }
            if(species == "Zeebra"){
                amount = Lion.getAmount();
                animalID = species + amount;
                Zeebra animalID(name, species, age, habitat);
                zoo.push_back(animalID);
                }
            if(species == "Penguin"){
                amount = Lion.getAmount();
                animalID = species + amount;
                Penguin animalID(name, species, age, habitat);
                zoo.push_back(animalID);
                }
            if(species == "Sloth"){
                amount = Lion.getAmount();
                animalID = species + amount;
                Sloth animalID(name, species, age, habitat);
                zoo.push_back(animalID);
                }
            if(species == "Owl"){
                amount = Lion.getAmount();
                animalID = species + amount;
                Owl animalID(name, species, age, habitat);
                zoo.push_back(animalID);
                }
            else{
                std::cout << "Something went wrong while creating the animal (IF-ELSE), FATAL ERROR";
                return 0;
                }
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
    std::vector<IAnimal*> zoo;//Container for animals, it can increase in size dinamically.


    return 0;
}

///Pending
/*
    -Recursive function to know the total amount of food the animals will need
    -The sound of animals and feed methods
    -Habitat class/method: Area for animals and that has a certain capacity for each animal
*/
///Main
/*
    -Add animals
    -Remove animals
    -Calculate total food required
    -Chech habitat space to add more animals
*/
///Extras
/*
    -Add ASCII animal representation when displaying them
    -Add money to the game to buy food
    -Add option to allow people to enter the zoo and gain money
    -If an animal passes a certain age/days without eating dies
    -Option to make a day pass
*/

