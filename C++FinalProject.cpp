///SelfNotes
/*
    Lion::age -> :: is used to call a method that is inside a namespace or class
    static variable have to be declare outside classes...for some reason
*/
#include <iostream>
#include <vector>   //To use vectors
#include <string>   //I forgot what is this used for
#include <algorithm>//Same for this
#include <cctype>   //For vectors too...I believe
#include <cstdlib>//using the library to clear the screen
#include <thread>  //For waiting some seconds
#include <chrono>   //For waiting some seconds

enum class Species{//This will be used when selecting a species for the animal
    Lion = 1,
    Elephant = 2,
    Axolotl = 3,
    Giraffe = 4,
    Zebra = 5,
    Penguin = 6,
    Sloth = 7,
    Owl = 8
};

enum class Habitat{
    Savanas = 1,
    Grasslands = 2,
    FreshwaterLakes = 3,
    Wetlands = 4,
    AntarticIce = 5,
    SubantarticIsland = 6,
    TropicalRainforest = 7,
    CloudForests = 8,
    Deserts = 9,
    Tundra = 10
};

std::string intToSpecies(Species species){  //To transform the species number to a string
    switch(species){
        case Species::Lion:
            return "Lion";
        case Species::Elephant:
            return "Elephant";
        case Species::Axolotl:
            return "Axolotl";
        case Species::Giraffe:
            return "Giraffe";
        case Species::Zebra:
            return "Zebra";
        case Species::Penguin:
            return "Penguin";
        case Species::Sloth:
            return "Sloth";
        case Species::Owl:
            return "Owl";
        default:
            return "UNKNOWN";
    }
}

std::string intToHabitats(Habitat habitat){
    switch(habitat){
        case Habitat::Savanas:
            return "Savana";
        case Habitat::Grasslands:
            return "Grassland";
        case Habitat::FreshwaterLakes:
            return "Freshwater Lake";
        case Habitat::Wetlands:
            return "Wetland";
        case Habitat::AntarticIce:
            return "Antartic Ice";
        case Habitat::SubantarticIsland:
            return "Subantartic Island";
        case Habitat::TropicalRainforest:
            return "Tropical Rainforest";
        case Habitat::CloudForests:
            return "Cloud Forest";
        case Habitat::Deserts:
            return "Desert";
        case Habitat::Tundra:
            return "Tundra";
        default:
            return "UNKNOWN";
    }
}

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
class Zebra : public IAnimal{
    using IAnimal::IAnimal;//To call the IAnimal Constructor
    static int amount; //Number of animals for each species, helps keeping track of how many there are
    const int FoodRequired = 10;
public:
    static int getAmount(){ //returns the amount of animals
        return amount; }
    static void incrementAmount() {
        amount++; }
//Actions
    void makeSound()const override{//zeebra
        std::cout << "The zebra makes a sound" << std::endl;
    }
    void feed()const override{
        std::cout << "The zebra eats" << std::endl;
    }
};
int Zebra::amount = 0;
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

void DisplayAnimals(std::vector<IAnimal*>& zoo){///Displays all the animals
    for(IAnimal* animal : zoo){
        std::cout << "Name: " << animal->getName() << " | Species: " << animal->getSpecies()<< std::endl;
    }
}

void RemoveAnimal(std::vector<IAnimal*>& zoo){///Removes an animal

    std::string name = " ";

    std::cout << "What is the name of the animal you want to remove? >> ";
    std::cin >> name;

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
void AddAnimal(std::vector<IAnimal*>& zoo)
{
    int amount = 0; //To locally store the amount of animals
    std::string animalID = " ";   //Name that the animal will have within the array
    int sentinel = 0;   //Exists the loop
//----------------------Information of the animal------------------------
    int species = 1;    //species chosen by the user (ENUM)
    std::string species_string = " ";    //species enum in string form

    std::string name = " ";  //Name of the animal chosen by the user

    int age = 0;    //Age of the animal chosen by the user
    int habitat = 0;//habitat of the animal chosen by the user (ENUM)
    std::string habitat_string= " ";    //habitat enum in string form
//---------------------------------------------------------------------


    while(sentinel == 0){
        std::cout << "What type of animal do you want to acquire: " << std::endl;
        std::cout << "1) Lion" << std::endl;
        std::cout << "2) Elephant" << std::endl;
        std::cout << "3) Axolotl" << std::endl;
        std::cout << "4) Giraffe" << std::endl;
        std::cout << "5) Zebra" << std::endl;
        std::cout << "6) Penguin" << std::endl;
        std::cout << "7) Sloth" << std::endl;
        std::cout << "8) Owl" << std::endl;
        std::cin >> species;

        if(species >= 1 && species <= 8){
            sentinel = 1;
        }//zeebra
        else{
            std::cout << "Try again" << std::endl;
        }
    }
        std::cout << "What is the name of the animal >> ";
        std::cin >> name;

        while(sentinel == 1){
            std::cout << "What is the age of the animal >>";
            std::cin >> age;
            if(age > 0){
                sentinel = 2;
            }
            else {
                std::cout << "Wait for it to be born, try again" << std::endl;
            }
        }
        while(sentinel == 2){
            std::cout << "What is the habitat of the animals? " << std::endl;
            std::cout << "1) Savana" << std::endl;
            std::cout << "2) Grassland" << std::endl;
            std::cout << "3) Freshwater Lake" << std::endl;
            std::cout << "4) Wetlands" << std::endl;
            std::cout << "5) Antarticle" << std::endl;
            std::cout << "6) Subantartic Island" << std::endl;
            std::cout << "7) Tropical Rainforest" << std::endl;
            std::cout << "8) Cloud forest" << std::endl;
            std::cout << "9) Desert" << std::endl;
            std::cout << "10) Tundra" << std::endl;
            std::cin >> habitat;

            if(habitat >= 1 && habitat <= 10){
                sentinel = 3;
            }
            else {
                std::cout << "Try again";
            }
        }
    Habitat habitat1 = static_cast<Habitat>(habitat);
    habitat_string = intToHabitats(habitat1);

    Species species1 = static_cast<Species>(species);
    species_string = intToSpecies(species1);


    switch(species){
        case 1:
            amount = Lion::getAmount();
            animalID = "Lion" + std::to_string(amount);
            zoo.push_back(new Lion(name, "Lion", age, habitat_string));//Creates the new animal and pushes it to the end of the vector(array)
                break;
        case 2:
            amount = Elephant::getAmount();
            animalID = "Elephant" + std::to_string(amount);
            zoo.push_back(new Elephant(name, "Elephant", age, habitat_string));//Creates the new animal and pushes it to the end of the vector(array)
                break;
        case 3:
            amount = Axolotl::getAmount();
            animalID = "Axolotl" + std::to_string(amount);
            zoo.push_back(new Axolotl(name, "Axolotl", age, habitat_string));//Creates the new animal and pushes it to the end of the vector(array)
                break;
        case 4:
            amount = Giraffe::getAmount();
            animalID = "Giraffe" + std::to_string(amount);
            zoo.push_back(new Giraffe(name, "Giraffe", age, habitat_string));//Creates the new animal and pushes it to the end of the vector(array)
                break;
        case 5:
            amount = Zebra::getAmount();
            animalID = "Zebra" + std::to_string(amount);
            zoo.push_back(new Zebra(name, "Zebra", age, habitat_string));//Creates the new animal and pushes it to the end of the vector(array)
                break;
        case 6:
            amount = Penguin::getAmount();
            animalID = "Penguin" + std::to_string(amount);
            zoo.push_back(new Penguin(name, "Penguin", age, habitat_string));//Creates the new animal and pushes it to the end of the vector(array)
                break;
        case 7:
            amount = Sloth::getAmount();
            animalID = "Sloth" + std::to_string(amount);
            zoo.push_back(new Sloth(name, "Sloth", age, habitat_string));//Creates the new animal and pushes it to the end of the vector(array)
                break;
        case 8:
            amount = Owl::getAmount();
            animalID = "Owl" + std::to_string(amount);
            zoo.push_back(new Owl(name, "Owl", age, habitat_string));//Creates the new animal and pushes it to the end of the vector(array)
                break;
        default:
            std::cout << "Something went wrong while creating the animal (IF-ELSE), FATAL ERROR";
            break;
}
}
///////////////////////////////////////////////
///////////////////////////////////////////////
///////////////////////////////////////////////

///////////////////////////////////////////////
///////////////////////////////////////////////
///////////////////////////////////////////////

///////////////////////////////////////////////
///////////////////////////////////////////////
///////////////////////////////////////////////

///////////////////////////////////////////////
///////////////////////////////////////////////
///////////////////////////////////////////////
void clearScreen(){ ///Clears the screen
    system("cls");
}








int main()
{
    int optionSelected = 0; //Stores what the used chosed to do
    int desicion = 0;   //For desicion in the else loop

    std::vector<IAnimal*> zoo;//Container for animals, it can increase in size dinamically.

    while(true){
    std::cout << "WELCOME TO THE ZOO ADMINISTRATION SYSTEM." << std::endl;
    std::cout << "Here you will be able to administer your animals, some of the funtionalities you will have are:" << std::endl;
    //std::this_thread::sleep_for(std::chrono::seconds(0.1)); // Delay for 1 seconds
    std::cout << "1) Add animals to your zoo" << std::endl;
    //std::this_thread::sleep_for(std::chrono::seconds(0.1)); // Delay for 1 seconds
    std::cout << "2) Remove animals from your zoo (Free them)" << std::endl;
    //std::this_thread::sleep_for(std::chrono::seconds(0.1)); // Delay for 1 seconds
    std::cout << "3) Display the animals you currently have" << std::endl;
    //std::this_thread::sleep_for(std::chrono::seconds(0.1)); // Delay for 1 seconds
    std::cout << "4) Feed the animals" << std::endl;
    //std::this_thread::sleep_for(std::chrono::seconds(0.1)); // Delay for 1 seconds
    std::cout << "5) Gain money by opening the zoo the people (WIP)" << std::endl;
    //std::this_thread::sleep_for(std::chrono::seconds(0.1)); // Delay for 1 seconds
    std::cout << "6) Choose what to do dayly, if eather gain money or feed them, the more animals the more money (WIP)" << std::endl;
    //std::this_thread::sleep_for(std::chrono::seconds(0.1)); // Delay for 1 seconds

    std::cout << "\n";
    std::cout << "Choose an option: ";
    std::cin >> optionSelected;


    ///Change to switch statements

    switch(optionSelected){
        case 1:
            AddAnimal(zoo);
        case 2:
            RemoveAnimal(zoo);
            break;
        case 3:
            DisplayAnimals(zoo);
            break;
        case 4:
            break;
        case 5:
            std::cout << "Work in process";
        case 6:
            std::cout << "Work in process";
        default:
            std::cout << "You should have selected an option :(";
            }
}
    /*
    std::cin.get(); // Wait for user input
    clearScreen(); // Clear the screen
    */

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
