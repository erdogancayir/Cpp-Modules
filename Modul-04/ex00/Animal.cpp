#include "Animal.hpp"

/* CONSTRUCTOR */

Animal::Animal(){
	this->type = "StreetAnimals";
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal &oth){
	*this = oth;
}

/* DESTRUCTOR */

Animal::~Animal(){
	std::cout << "Animal Destructor Called" << std::endl;
}

/* METHODS */

Animal	&Animal::operator=(const Animal &oth){
	this->type = oth.getType();
	std::cout << "Animal opeerator= Worked" << std::endl;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Animal &obj){
	o << obj.getType();
	return (o);
}

void	Animal::makeSound() const{

}

str	Animal::getType() const{
	return (this->type);
}

void	Animal::setType(const str type){
	this->type = type;
}