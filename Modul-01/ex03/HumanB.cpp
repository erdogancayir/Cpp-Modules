#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::HumanB(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon_v = &weapon;
}

void HumanB::setWeapon(Weapon &wep)
{
	this->weapon_v = &wep;
}

void HumanB::attack(void)
{
	std::cout << this->name << "attacks with their" << weapon_v->getType() << std::endl;
}