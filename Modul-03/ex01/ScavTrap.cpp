#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap: Default Constructer Worked" << std::endl;
	this->Name = "";
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamege = 20;
}

ScavTrap::ScavTrap(const str name){
	std::cout << "ScavTrap: Constructer Worked" << std::endl;
	this->Name = name;
	this->AttackDamege = 20;
	this->EnergyPoint = 50;
	this->HitPoint = 100;
}

ScavTrap::ScavTrap(const ScavTrap &oth){
	std::cout << "ScavTrap: Copy Constructer Worked " << std::endl;
	*this = oth;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap: Destructer Worked" << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->HitPoint > 0 && this->EnergyPoint > 0)
	{
		std::cout << "ScavTrap " << this->Name << " is now in Gate keeper" << std::endl;
	}
}

void ScavTrap::attack(const str &target)
{
	if (this->EnergyPoint > 0 && this->HitPoint > 0)
	{
		std::cout << "ScavTrap " << this->Name << " attacks " << target;
		std::cout << ", causing !'3232" << this->AttackDamege << " points of damage!" << std::endl;
		this->EnergyPoint--;
	}
}