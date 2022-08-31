#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Constructor: A dog have been created" << std::endl;
	this->brain = new Brain();
	this->setType("Dog");
}

Dog::Dog(const Dog &obj): Animal(obj){
	*this = obj;
}

Dog::~Dog(){
	std::cout << "Destructor: Dog have been destroyed" << std::endl;
	delete this->brain;
}

Dog	&Dog::operator=(const Dog &obj){
	this->type = obj.getType();
	this->brain = new Brain(*obj.brain);
	return (*this);
}

std::ostream	&operator<<(std::ostream &oth, const Dog &obj){
	oth << obj.getType();
	return (oth);
}

void	Dog::makeSound() const{
	std::cout << "HAowwW!" << std::endl;
}