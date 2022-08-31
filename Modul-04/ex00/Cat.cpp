#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat: Constructor Called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &obj): Animal(obj){
	*this = obj;
}

Cat::~Cat(){
	std::cout << "Cat: Destructor Called" << std::endl;
}

Cat	&Cat::operator=(const Cat &obj){
	this->type = obj.getType();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, const Cat &obj){
	o << obj.getType();
	return (o);
}

void	Cat::makeSound() const{
	std::cout << YEL << "meow meoow mioua:/:/" << WHT << std::endl;
}
