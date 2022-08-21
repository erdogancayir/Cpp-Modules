#include "zombie.hpp"

zombie *newZombie(std::string name)
{
	zombie *new_zombie = new zombie(name);
	return (new_zombie);
}