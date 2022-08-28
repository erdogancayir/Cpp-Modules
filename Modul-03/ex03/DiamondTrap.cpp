#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	std::cout << "DiamondTrap: Deault Constructer Worked" << std::endl;
	this->Name = "";
	this->AttackDamege = ScavTrap::AttackDamege;
	this->EnergyPoint = ScavTrap::EnergyPoint;
	this->HitPoint = FragTrap::HitPoint;
}

DiamondTrap::DiamondTrap(str Name){
	std::cout << "DiamondTrap: Constructer Worked" << std::endl;
	this->Name = Name;
	ClapTrap::Name = Name + "_clap_name";
	this->AttackDamege = ScavTrap::AttackDamege;
	this->EnergyPoint = ScavTrap::EnergyPoint;
	this->HitPoint = FragTrap::HitPoint;
}

DiamondTrap::DiamondTrap(const DiamondTrap &oth){
	std::cout << "DiamondTrap: Copy Constructer Worked" << std::endl;
	*this = oth;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap: Destructor Worked" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &oth)
{
	if (this != &oth)
		this->Name = oth.Name;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiomandTrap name: " << this->Name
			  << " CrapTrap name: " << ClapTrap::Name << std::endl;
}