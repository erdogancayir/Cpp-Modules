#include "zombie.hpp"

void	zombie::announce(void)
{
	std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

zombie::~zombie(){
	std::cout << "Finish" << std::endl;
}

zombie::zombie(std::string name)
{
	Name = name;
}

std::string	zombie::get_name(void) {
	return (this->Name);
}