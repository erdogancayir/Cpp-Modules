#include "zombie.hpp"

zombie *newZombie(std::string name)
{
	zombie *new_zombie = new zombie(name);
	return (new_zombie);
}

void randomChump(std::string name, std::string lit)
{
	zombie cpp(name);
	std::cout << name + ": " << lit + " MOorRRrReeE BraiiiiiiinnnzzzZ..." << std::endl;
}

void	zombie::announce(void)
{
	std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

zombie::~zombie(){
	std::cout << "Finish" << std::endl;
	exit(0);
}

zombie::zombie(std::string name)
{
	Name = name;
}

zombie::zombie() {
}

std::string	zombie::get_name(void) {
	return (this->Name);
}