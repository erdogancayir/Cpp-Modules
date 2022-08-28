#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << "FragTrap: Default Constructer Worked" << std::endl;
	this->Name = "";
	this->AttackDamege = 30;
	this->HitPoint = 100;
	this->EnergyPoint = 100;
}

FragTrap::FragTrap(const str name)
{
	std::cout << "FragTrap: Constructer Worked" << std::endl;
	this->Name = name;
	this->AttackDamege = 30;
	this->HitPoint = 100;
	this->EnergyPoint = 100;
}

FragTrap::FragTrap(const FragTrap &oth){
	*this = oth;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap: Destructor Worked" << std::endl;
}

void FragTrap::highFivesGuys(){
	if (this->HitPoint > 0 && this->EnergyPoint > 0)
	{
		std::cout << "FragTrap: " << this->Name << " offers a high fives" << std::endl;
	}
}

void FragTrap::attack(const str &target)
{
	if (this->EnergyPoint > 0 && this->HitPoint > 0)
	{
		std::cout << "FragTrap " << this->Name << " attacks " << target;
		std::cout << ", causing " << this->AttackDamege << " points of damage!" << std::endl;
		this->EnergyPoint--;
	}
}

FragTrap	&FragTrap::operator=(const FragTrap &oth){
	if (this != &oth)
	{
		this->Name = oth.Name;
		this->AttackDamege = oth.AttackDamege;
		this->EnergyPoint = oth.EnergyPoint;
		this->HitPoint = oth.HitPoint;
	}
	return (*this);
}