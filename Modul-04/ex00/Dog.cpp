#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog: Constructor Called" << std::endl;
	this->setType("Dog");
}

Dog::Dog(const Dog &oth): Animal(oth){
	*this = oth;
}

Dog	&Dog::operator=(const Dog &obj){
	this->type = obj.getType();
	return (*this);
}

Dog::~Dog(){
	std::cout << YEL << "Dog: Constructor Called" << WHT << std::endl;
}

std::ostream	&operator<<(std::ostream &o, const Dog &obj){
	o << obj.getType();
	return (o);
}

void	Dog::makeSound() const{
	std::cout << YEL << "Hauw HaoWww!!" << WHT << std::endl;
}
