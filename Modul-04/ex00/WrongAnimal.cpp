#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
   /*  std::cout << "WrongAnimal: Constructor Called" << std::endl; */
    this->setType("None");
}

WrongAnimal::~WrongAnimal(){
    /* std::cout << "WrongAnimal: Destructor Called" << std::endl; */
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj){
   /*  std::cout << "WrongAnimal: Copy Constructor Called" << std::endl; */
    *this = obj;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &obj){
    this->type = obj.getType();
    return (*this);
}

str WrongAnimal::getType() const{
    return (this->type);
}

void   WrongAnimal::setType(str const &type){
    this->type = type;
}

void    WrongAnimal::makeSound() const{
    std::cout << "Wrong Animal sound" << std::endl;
}