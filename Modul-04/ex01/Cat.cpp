#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Constructor: A cat has been created" << std::endl;
	this->setType("Cat");
	this->brain = new Brain();
}

Cat::Cat(const Cat &obj): Animal(obj){
	*this = obj;
}

Cat::~Cat(){
	std::cout << "Destructor: Cat has been destroyed" << std::endl;
	delete this->brain;
}

Cat	&Cat::operator=(const Cat &obj){
	this->type = obj.getType();
	this->brain = new Brain(*obj.brain);
	return (*this);
}

std::ostream	&operator<<(std::ostream &oth, const Cat &obj){
	oth << obj.getType();
	return (oth);
}

void	Cat::makeSound() const{
	std::cout << "Meoww :/:/" << std::endl;
}