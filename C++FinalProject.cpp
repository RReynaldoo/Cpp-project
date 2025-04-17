///SelfNotes
/*
    Lion::age -> :: is used to call a method that is inside a namespace or class
    static variable have to be declare outside classes...for some reason
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>



///ALL animals should have this interface to make an array using polymorphism, it will also contain essential methods
class IContainer{
};
///////////////////////////////////////////////
///////////////////////////////////////////////
///////////////////////////////////////////////
///Template for animals, it is abstract so no implementation of methods
class IAnimal
{
    private:
        std::string name;
        std::string species;
        int age;
        std::string habitat;
    public:
        IAnimal(std::string name, std::string species, int age, std::string habitat){//Constructor of all animals
            setName(name);
            setSpecies(species);
            setAge(age);
            setHabitat(habitat);
        }
        //Basic methods
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
};
///////////////////////////////////////////////
///////////////////////////////////////////////
///////////////////////////////////////////////
///Interface for endangered species
class IEndangered
{
    virtual void monitorStatus() const = 0;
};


///////////////////////////////////////////////
///////////////////////////////////////////////
///////////////////////////////////////////////
///Animals in the zoo-------------------------------------------------
class Lion : public IAnimal, public IEndangered{
    using IAnimal::IAnimal;//To call the IAnimal Constructor
    static int amount; //Number of animals for each species, helps keeping track of how many there are
    const int FoodRequired = 7;
public:
    static int getAmount(){ //returns the amount of animals
        return amount; }
    static void incrementAmount() {
        amount++; }
//Actions
    void makeSound()const override{
        std::cout << "The lion Rawrs" << std::endl;
    }
    void feed() const override{
        std::cout << "The lioon eats" << std::endl;
    }
    virtual void monitorStatus() const override{
        std::cout << "So far so good" << std::endl;
    }

};
int Lion::amount = 0;   //Sets the amount of Lions to 0
///--------------------------------------------------------------------
class Elephant : public IAnimal, public IEndangered{
    using IAnimal::IAnimal;//To call the IAnimal Constructor
    static int amount; //Number of animals for each species, helps keeping track of how many there are
    const int FoodRequired = 150;
public:
    static int getAmount(){ //returns the amount of animals
        return amount; }
    static void incrementAmount() {
        amount++; }
//Actions
    void makeSound()const override{
        std::cout << "The Elephant kinda rawrs" << std::endl;
    }
    void feed()const override{
        std::cout << "The elephant eats" << std::endl;
    }
    virtual void monitorStatus()const override{
        std::cout << "So far so good" << std::endl;
    }
};
int Elephant::amount = 0;
///--------------------------------------------------------------------
class Axolotl : public IAnimal, public IEndangered{
    using IAnimal::IAnimal;//To call the IAnimal Constructor
    static int amount; //Number of animals for each species, helps keeping track of how many there are
    const int FoodRequired = 0.01;
public:
    static int getAmount(){ //returns the amount of animals
        return amount; }
    static void incrementAmount() {
        amount++; }
//Actions
    void makeSound()const override{
        std::cout << "The axoltl makes bubbles" << std::endl;
    }
    void feed()const override{
        std::cout << "The axolotl ate" << std::endl;
    }
    virtual void monitorStatus()const override{
        std::cout << "So far so good" << std::endl;
    }
};
int Axolotl::amount = 0;
///--------------------------------------------------------------------
class Giraffe : public IAnimal, public IEndangered{
    using IAnimal::IAnimal;//To call the IAnimal Constructor
    static int amount; //Number of animals for each species, helps keeping track of how many there are
    const int FoodRequired = 30;
public:
    static int getAmount(){ //returns the amount of animals
        return amount; }
    static void incrementAmount() {
        amount++; }
//Actions
    void makeSound()const override{
        std::cout << "The giraffe laughs" << std::endl;
    }
    void feed()const override{
        std::cout << "The giraffe eats" << std::endl;
    }
    virtual void monitorStatus()const override{
        std::cout << "So far so good" << std::endl;
    }
};
int Giraffe::amount = 0;
///--------------------------------------------------------------------
class Zeebra : public IAnimal{
    using IAnimal::IAnimal;//To call the IAnimal Constructor
    static int amount; //Number of animals for each species, helps keeping track of how many there are
    const int FoodRequired = 10;
public:
    static int getAmount(){ //returns the amount of animals
        return amount; }
    static void incrementAmount() {
        amount++; }
//Actions
    void makeSound()const override{
        std::cout << "The zeebra makes a sound" << std::endl;
    }
    void feed()const override{
        std::cout << "The zeebra eats" << std::endl;
    }
};
int Zeebra::amount = 0;
///--------------------------------------------------------------------
class Penguin : public IAnimal{
    using IAnimal::IAnimal;//To call the IAnimal Constructor
    static int amount; //Number of animals for each species, helps keeping track of how many there are
    const int FoodRequired = 10;
public:
    static int getAmount(){ //returns the amount of animals
        return amount; }
    static void incrementAmount() {
        amount++; }
//Actions
    void makeSound()const override{
        std::cout << "The penguin makes a sound" << std::endl;
    }
    void feed()const override{
        std::cout << "The penguin eats fish" << std::endl;
    }
};
int Penguin::amount = 0;
///--------------------------------------------------------------------
class Sloth : public IAnimal{
    using IAnimal::IAnimal;//To call the IAnimal Constructor
    static int amount; //Number of animals for each species, helps keeping track of how many there are
    const int FoodRequired = 1;
public:
    static int getAmount(){ //returns the amount of animals
        return amount; }
    static void incrementAmount() {
        amount++; }
//Actions
    void makeSound()const override{
        std::cout << "The sloth makes a sound" << std::endl;
    }
    void feed()const override{
        std::cout << "The sloth eats" << std::endl;
    }
};
int Sloth::amount = 0;
///--------------------------------------------------------------------
class Owl : public IAnimal{
    using IAnimal::IAnimal;//To call the IAnimal Constructor
    static int amount; //Number of animals for each species, helps keeping track of how many there are
    const int FoodRequired = 0.3;
public:
    static int getAmount(){ //returns the amount of animals
        return amount; }
    static void incrementAmount() {
        amount++; }
//Actions
    void makeSound()const override{
        std::cout << "The Owl owls?" << std::endl;
    }
    void feed()const override{
        std::cout << "The owl eats something" << std::endl;
    }
};
int Owl::amount = 0;
///////////////////////////////////////////////
///////////////////////////////////////////////
///////////////////////////////////////////////



///////////////////////////////////////////////
///////////////////////////////////////////////
///////////////////////////////////////////////
void AddAnimal(std::string name, std::string species, int age, std::string habitat, std::vector<IAnimal*>& zoo)
{
    int amount = 0; //To locally store the amount of animals
    std::string animalID = " ";   //Name that the animal will have within the array

            if(species == "Lion"){
                amount = Lion::getAmount();
                animalID = species + std::to_string(amount);
                zoo.push_back(new Lion(name, species, age, habitat));//Creates the new animal and pushes it to the end of the vector(array)
            }
            else if(species == "Elephant" ){
                amount = Elephant::getAmount();
                animalID = species + std::to_string(amount);
                zoo.push_back(new Elephant(name, species, age, habitat));//Creates the new animal and pushes it to the end of the vector(array)
                }
            else if(species == "Axolotl"){
                amount = Axolotl::getAmount();
                animalID = species + std::to_string(amount);
                zoo.push_back(new Axolotl(name, species, age, habitat));//Creates the new animal and pushes it to the end of the vector(array)
                }
            else if(species == "Giraffe"){
                amount = Giraffe::getAmount();
                animalID = species + std::to_string(amount);
                zoo.push_back(new Giraffe(name, species, age, habitat));//Creates the new animal and pushes it to the end of the vector(array)
                }
            else if(species == "Zeebra"){
                amount = Zeebra::getAmount();
                animalID = species + std::to_string(amount);
                zoo.push_back(new Zeebra(name, species, age, habitat));//Creates the new animal and pushes it to the end of the vector(array)
                }
            else if(species == "Penguin"){
                amount = Penguin::getAmount();
                animalID = species + std::to_string(amount);
                zoo.push_back(new Penguin(name, species, age, habitat));//Creates the new animal and pushes it to the end of the vector(array)

                }
            else if(species == "Sloth"){
                amount = Sloth::getAmount();
                animalID = species + std::to_string(amount);
                zoo.push_back(new Sloth(name, species, age, habitat));//Creates the new animal and pushes it to the end of the vector(array)
                }
            else if(species == "Owl"){
                amount = Owl::getAmount();
                animalID = species + std::to_string(amount);
                zoo.push_back(new Owl(name, species, age, habitat));//Creates the new animal and pushes it to the end of the vector(array)
                }
            else{
                std::cout << "Something went wrong while creating the animal (IF-ELSE), FATAL ERROR";
                return;
                }
        }
///////////////////////////////////////////////
///////////////////////////////////////////////
///////////////////////////////////////////////








///////////////////////////////////////////////
///////////////////////////////////////////////
///////////////////////////////////////////////
void RemoveAnimal(std::string name, std::vector<IAnimal*>& zoo){///Removes an animal
    for(int i = 0; i < zoo.size(); i++){
        if(zoo[i]->getName() == name){
            delete zoo[i];  //bye bye object
            zoo.erase(zoo.begin() + i); //remove pointer from vector
            break;
        }
    }
}
///////////////////////////////////////////////
///////////////////////////////////////////////
///////////////////////////////////////////////
void DisplayAnimals(std::vector<IAnimal*>& zoo){///Displays all the animals
    for(IAnimal* animal : zoo){
        std::cout << "Name: " << animal->getName() << std::endl;
    }
}
///////////////////////////////////////////////
///////////////////////////////////////////////
///////////////////////////////////////////////









int main()
{
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

