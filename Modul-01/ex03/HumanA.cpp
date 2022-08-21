#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &wep): weapon_v(wep) {
	this->Name = name;
}

void	HumanA::attack(void){
	std::cout << this->Name << "attacks with their" << weapon_v.getType() << std::endl;
}