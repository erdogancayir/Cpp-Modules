#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Constructor: A brain has been created" << std::endl;
}

Brain::Brain(const Brain &obj){
	*this = obj;
}

Brain::~Brain() {
	std::cout << "Destructor: Brain has been destroyed" << std::endl;
}

Brain	&Brain::operator=(const Brain &obj){
	str *ideas = obj.getIdeas();
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ideas[i];
	return (*this);
}

str	*Brain::getIdeas() const {
	return ((str *)ideas);
}

std::ostream &operator<<(std::ostream &oth, const Brain &obj)
{
	(void)obj;
	std::cout << "this is a brain" << std::endl;
	return oth;
}