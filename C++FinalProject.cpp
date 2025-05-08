///Credits///
///Programmer in charge of the main method, output format, stablishing the variables the team used and tying the code together : Reynaldo Bautista
///Programmer in charge of creating all the classes and stablishing a vector to store the animals : Odudu
///Programmer in charge of Display, Pet and Feed animnal methods, figured out and helped the team to use references : Juan Alavares
///Programmer in charge of the enums, their convertions to strings and the addAnimal method: Ricardo
///Programmer in charge of using recursion in the foodRequired method, and helped fix several problems in all methods, specially in addAnimal : Faris

///All team members also worked in other teammates' assingned tasks and did not only do what was listed above. However, this is how it was distributed at first, and its what each individual primarly did.






///These are the libraries needed for the code to work
#include <iostream> //Standard for I/O statements
#include <vector>   //To use vectors
#include <string>   //To use strings
#include <algorithm>//For algoritms like sort, find and transform
#include <cctype>   //For character classification like isDigit, toupper, tolower
#include <cstdlib>//using the library to clear the screen
#include <iomanip>  // for std::setw

///These enums are used in addAnimal method to facilitate the assignment of habitatis and species
///They are used alongside the method that converts the enums into strings
enum class Species{
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

///Interface for endangered species
class IEndangered
{
    virtual void monitorStatus() const = 0;
};

///Template for animals, it is abstract so no implementation of methods
class IAnimal
{
    private://declaring variables that should not be accessed directly
        std::string name;
        std::string species;
        int age;
        std::string habitat;
        bool hasEaten;
    public://Methods that all objects can use
        IAnimal(std::string name, std::string species, int age, std::string habitat){//Constructor of all animals
            setName(name);
            setSpecies(species);
            setAge(age);
            setHabitat(habitat);
        }

        //Basic methods
        virtual ~IAnimal() = default;
        virtual void makeSound() const = 0;
        virtual void feed() const = 0;
        virtual double getFoodRequired() const = 0;

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

///The following are the definitions for the animal classes
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
        std::cout << "The Lion is happy" << std::endl;
    }
    double getFoodRequired() const override {
    return FoodRequired;
}

};
int Lion::amount = 0;   //Sets the amount of Lions to 0, for all classes this has to be done as c++ works this way
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
        std::cout << "The Elephant trumpets" << std::endl;
    }
    void feed()const override{
        std::cout << "The elephant eats" << std::endl;
    }
    virtual void monitorStatus()const override{
        std::cout << "The elephant is happy" << std::endl;
    }
    double getFoodRequired() const override {
    return FoodRequired;
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
        std::cout << "The axolotl is happy" << std::endl;
    }
    double getFoodRequired() const override {
    return FoodRequired;
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
        std::cout << "The giraffe snorts" << std::endl;
    }
    void feed()const override{
        std::cout << "The giraffe eats" << std::endl;
    }
    virtual void monitorStatus()const override{
        std::cout << "The giraffe is happy" << std::endl;
    }
    double getFoodRequired() const override {
    return FoodRequired;
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
        std::cout << "The zebra brays" << std::endl;
    }
    void feed()const override{
        std::cout << "The zebra eats" << std::endl;
    }
    double getFoodRequired() const override {
    return FoodRequired;
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
        std::cout << "The penguin honks" << std::endl;
    }
    void feed()const override{
        std::cout << "The penguin eats fish" << std::endl;
    }
    double getFoodRequired() const override {
    return FoodRequired;
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
        std::cout << "The sloth snorts" << std::endl;
    }
    void feed()const override{
        std::cout << "The sloth eats" << std::endl;
    }
    double getFoodRequired() const override {
    return FoodRequired;
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
        std::cout << "The Owl hoots" << std::endl;
    }
    void feed()const override{
        std::cout << "The owl eats" << std::endl;
    }
    double getFoodRequired() const override {
    return FoodRequired;
}
};
int Owl::amount = 0;

///Declarations and methods, so that all of them can be called without any issue, after this all of them are implemented
std::string intToSpecies(Species species);
std::string intToHabitats(Habitat habitat);
void DisplayAnimals(std::vector<IAnimal*>& zoo);
void clearScreen();
void RemoveAnimal(std::vector<IAnimal*>& zoo);
void AddAnimal(std::vector<IAnimal*>& zoo);
int totalFoodRequired(std::vector<IAnimal*>& zoo, int index);
void FeedAnimal(std::vector<IAnimal*>& zoo);
void PetAnimal(std::vector<IAnimal*>& zoo);

///To transform the species number in the enums to a string
std::string intToSpecies(Species species){
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

///Displays all animals
void DisplayAnimals(std::vector<IAnimal*>& zoo){

    int ccount = 0;//This variable is to show the number ID of the animal, so that the user can decide which animal to interact with based on this number. The first will display 1, for the second 2, and so on
    std::cout << std::left;
    std::cout << std::setw(10) << '#';  //Setw() sets a default width for each word, this way they are alligned when displayed
    std::cout << std::setw(20) << "Name";
    std::cout << std::setw(10) << "Species";
    std::cout << std::setw(10) << "Age";
    std::cout << std::setw(10) << "Habitat" << std::endl;

    for(IAnimal* animal : zoo){//Displays all the information about the animal alligned thanks to setw()
        std::cout << std::left;
        std::cout << std::setw(10) << ccount+1;
        std::cout << std::setw(20) << animal->getName();
        std::cout << std::setw(10) << animal->getSpecies();
        std::cout << std::setw(10) << animal->getAge();
        std::cout << std::setw(10) << animal->getHabitat() << std::endl;
        ccount++;
    }
}

///Clears the screen for all systems. Should work for all OS
void clearScreen() {
    std::cout << "\033[2J\033[1;1H";
}

///Removes an animal
void RemoveAnimal(std::vector<IAnimal*>& zoo){

    int animalNumber;
    std::cout << "What is the number of the animal you want to remove? " << std::endl;
    DisplayAnimals(zoo);
    std::cout << "Type a number: ";
    std::cin >> animalNumber;

    while(std::cin.fail()){//This will appear in several other places of the code and all it does is to check if the input failed for an incorrect data type input. So it clears the error and asks again
    std::cout << "Wrong input, try again" << std::endl;
    std::cin.clear();//Resets the error flags that cin now has
    std::cin.ignore(256, '\n');//CLears the input that triggered the error
    std::cout << "Type a number: ";
    std::cin >> animalNumber;
    }

    if (animalNumber > 0 && animalNumber <= zoo.size()) { //Here it checks if the number that the user input is actually a number between 1 and the maximun number of animals displayed. if there are 5 animals, it should be from 1 - 5, no more no less
        delete zoo[animalNumber-1];               // Deallocate memory
        zoo.erase(zoo.begin() + animalNumber-1);  // Remove pointer from vector
        std::cout << "Animal removed successfully.\n";
    } else {
        std::cout << "Invalid animal number.\n";
    }
}

///Adds an animal to the vector
void AddAnimal(std::vector<IAnimal*>& zoo)
{
    int amount = 0; //To locally store the amount of animals
    std::string animalID = " ";   //Name that the animal will have within the array
    int sentinel = 0;   //Exits the loop
    int strSentinel = 0;

//----------------------Information of the animal------------------------
    int species = 0;    //species chosen by the user (ENUM)
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
        std::cout << "Choose: ";
        std::cin >> species;

        while(std::cin.fail()){//Checks if the input was the wrong data type
            std::cout << "Wrong input, try again" << std::endl;
            std::cin.clear();//Resets the error flags that cin now has
            std::cin.ignore(256, '\n');//CLears the input that triggered the error
            std::cout << "Choose: ";
            std::cin >> species;
        }

        if(species >= 1 && species <= 8){   //Checks that the input is in the right range, and for the other steps is the same, check for exceptions in cin and then check if the input is within the range
            sentinel = 1;
        }//zeebra
        else{
            std::cout << "Try again" << std::endl;
        }
        clearScreen();
    }
        while(strSentinel == 0){
        std::cout << "What is the name of the animal >> ";
        std::cin >> name;
        if(name.length() < 20){
            strSentinel = 1;
        }
        else{
            std::cout << std::endl << "Name is too long, or too short, try again" << std::endl;
            std::cin.ignore();
            std::cin.get();
            clearScreen();
        }
        }

        clearScreen();

        while(sentinel == 1){
            std::cout << "What is the age of the animal >>";
            std::cin >> age;

            while(std::cin.fail()){
            std::cout << "Wrong input, try again" << std::endl;
            std::cin.clear();//Resets the error flags that cin now has
            std::cin.ignore(256, '\n');//CLears the input that triggered the error
            std::cout << "Age of the animal: ";
            std::cin >> age;
        }
            if(age > 0){
                sentinel = 2;
            }
            else {
                std::cout << "Wait for it to be born, try again" << std::endl;
                std::cin.ignore();
                std::cin.get();
                clearScreen();
            }
            clearScreen();
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
            std::cout << "Choose: ";
            std::cin >> habitat;

            while(std::cin.fail()){
            std::cout << "Wrong input, try again" << std::endl;
            std::cin.clear();//Resets the error flags that cin now has
            std::cin.ignore(256, '\n');//CLears the input that triggered the error
            std::cout << "Choose: ";
            std::cin >> habitat;
        }

            if(habitat >= 1 && habitat <= 10){
                sentinel = 3;
            }
            else {
                std::cout << "Try again";
            }
            clearScreen();
        }
    ///First line is a call to the enum to assign a variable called habitat1 the enum the user chosed
    Habitat habitat1 = static_cast<Habitat>(habitat);
    ///This second one is to assign habitat_string a string value depending on what user chosed for the habitat
    habitat_string = intToHabitats(habitat1);
    ///In simple terms, it finds the habitat in the enum and then assignes a string value depending on what they chosed

    Species species1 = static_cast<Species>(species);
    species_string = intToSpecies(species1);


    switch(species){//Here the program assignes all the values the user input to the new object
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

///Uses recursion to return the total amount of food all animals will need
int totalFoodRequired(std::vector<IAnimal*>& zoo, int index) {
    // Base case: if index is out of bounds, return 0
    if (index >= zoo.size()) {
        return 0;
    }
    // Recursive case: add the food required for the current animal
    return zoo[index]->getFoodRequired() + totalFoodRequired(zoo, index + 1);
}

///Simple method to display that the animal is eating
void FeedAnimal(std::vector<IAnimal*>& zoo){
    int animal = 0;

    std::cout << "What animal you want to feed? Choose a number" << std::endl;
    DisplayAnimals(zoo);
    std::cout << "Choose: ";
    std::cin >> animal;

    if (animal > 0 && animal <= zoo.size()) {
        zoo[animal-1]->feed();
    } else {
        std::cout << "Invalid animal number.\n";
    }
}

///Simple method to display the sound the animal does
void PetAnimal(std::vector<IAnimal*>& zoo){
    int animal = 0;

    std::cout << "What animal you want to Pet? Choose a number" << std::endl;
    DisplayAnimals(zoo);
    std::cout << "Choose: ";
    std::cin >> animal;

    if (animal > 0 && animal <= zoo.size()) {
        zoo[animal-1]->makeSound();
    } else {
        std::cout << "Invalid animal number.\n";
    }

}

int main()
{
    int optionSelected = 0; //Stores what the used chosed to do
    int desicion = 0;   //For desicion in the else loop
    std::string placeHolder = " "; //used to wait for user input and go to the next step
    double food = 0;

    std::vector<IAnimal*> zoo;//Container for animals, it can increase in size dinamically.

    while(true){
    std::cout << "WELCOME TO THE ZOO ADMINISTRATION SYSTEM." << std::endl;
    std::cout << "Here you will be able to administer your animals, what do you want to do?" << std::endl << std::endl;
    std::cout << "1) Add animals to your zoo" << std::endl;
    std::cout << "2) Remove animals from your zoo (Free them)" << std::endl;
    std::cout << "3) Display the animals you currently have" << std::endl;
    std::cout << "4) Feed the animals" << std::endl;
    std::cout << "5) How much food you need for the animals you currently have" << std::endl;
    std::cout << "6) Pet animal" << std::endl;
    std::cout << "7) Exit" << std::endl;

    std::cout << "\n";
    std::cout << "Choose an option: ";
    std::cin >> optionSelected;

    while(std::cin.fail()){
    std::cout << "Wrong input, try again" << std::endl;
    std::cin.clear();//Resets the error flags that cin now has
    std::cin.ignore(256, '\n');//CLears the input that triggered the error
    std::cout << "Choose an option: ";
    std::cin >> optionSelected;
    }

    clearScreen();

    //Switch method were the user will be redirected to the corresponding method depending on what they chosed.
    switch(optionSelected){
        case 1:
            AddAnimal(zoo);
                optionSelected = 0;
                std::cout << "A new animal has joined the zoo!!! " << std::endl;
                std::cin.ignore();  //Catches the next space left by the previous selection, similar to waht happends in java
                std::cin.get(); //Waits for user input
                clearScreen(); // Clear the screen
            break;
        case 2:
            if(!zoo.empty()){//For this and other cases, if the vector is empty, it will display the user that there are no animals in the vector, therefore they cannot access these fuctionalities
            RemoveAnimal(zoo);
                    optionSelected = 0;
                    std::cin.ignore();
                    std::cin.get();
                    clearScreen();
                }
                else{
                    std::cout << "You dont have any animal in your zoo!";
                    std::cin.ignore();
                    std::cin.get();
                    clearScreen();
                }
            break;
        case 3:
            if(!zoo.empty()){
                DisplayAnimals(zoo);
                    optionSelected = 0;
                    std::cin.ignore();
                    std::cin.get();
                    clearScreen();
            }
                else{
                    std::cout << "You dont have any animals in your zoo!";
                    std::cin.ignore();
                    std::cin.get();
                    clearScreen();
                }
            break;
        case 4:
            if(!zoo.empty()){
            FeedAnimal(zoo);
                optionSelected = 0;
                std::cin.ignore();
                std::cin.get();
                clearScreen();
                }
            else{
                std::cout << "You dont have any animal to feed!";
                std::cin.ignore();
                std::cin.get();
                clearScreen();
            }
            break;
        case 5:
            if(!zoo.empty()){
                food = totalFoodRequired(zoo, 0);
                std::cout << "The total food required in KG for your current animals is: " << food << " KG";
                std::cin.ignore();
                std::cin.get();
                clearScreen();
            }
            else{
                std::cout << "You dont have any animal to feed!";
                std::cin.ignore();
                std::cin.get();
                clearScreen();
            }

                break;
        case 6:
        if(!zoo.empty()){
            PetAnimal(zoo);
            optionSelected = 0;
            std::cin.ignore();
            std::cin.get();
            clearScreen();
            }
            else{
                std::cout << "You dont have any animal in your zoo!";
                std::cin.ignore();
                std::cin.get();
                clearScreen();
            }
                break;
        case 7:
            return 0;
                break;
        default:
            std::cout << "Invalid option :(";
                break;
        }
    }
    return 0;
}

