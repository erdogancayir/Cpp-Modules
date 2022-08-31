#include "Animal.hpp"

Animal::Animal(){
	this->setType("AnimalNone");
}

Animal::Animal(const Animal &obj){
	*this = obj;
}

Animal::~Animal(){
}

Animal	&Animal::operator=(const Animal &oth){
	this->type = oth.getType();
	return (*this);
}

str Animal::getType() const{
	return (this->type);
}

void	Animal::setType(str type){
	this->type = type;
}

void	Animal::makeSound() const{
	std::cout << "!<>!" << std::endl;
}

std::ostream	&operator<<(std::ostream &oth, const Animal &obj){
	oth << obj.getType();
	return (oth);
}
