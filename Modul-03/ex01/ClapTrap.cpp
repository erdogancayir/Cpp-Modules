#include "ClapTrap.hpp"

/*
	** CONSTRUCTOR **
*/

ClapTrap::ClapTrap(){
	std::cout << "ClapTrap: " << std::endl;
	this->Name = "";
	this->AttackDamege = 0;
	this->HitPoint = 10;
	this->EnergyPoint = 10;
}

ClapTrap::ClapTrap(str name, int AttackDamage, int HitPoint, int EnergyPoint){
	std::cout << "ClapTrap: Constructer Worked " << std::endl;
	this->Name = name;
	this->AttackDamege = AttackDamage;
	this->EnergyPoint = EnergyPoint;
	this->HitPoint = HitPoint;
}

ClapTrap::ClapTrap(const ClapTrap &oth){
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
	*this = oth;
}

/* 
	**DESTRUCTOR**
*/

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap: Destructor Worked" << std::endl;
}

/*
	**OVERLOAD**
*/

ClapTrap &ClapTrap::operator=(const ClapTrap &oth)
{
	std::cout << RED << "ClapTrap\'s Operator= called" << NORM << std::endl;
	if (this != &oth)
	{
		this->Name = oth.Name;
		this->AttackDamege = oth.AttackDamege;
		this->HitPoint = oth.HitPoint;
		this->EnergyPoint = oth.EnergyPoint;
	}
	return (*this);
}

/* METHODS */

// ClapTrap <name> attacks <target>, causing <damage> points of damage!

void	ClapTrap::attack(const str &target)
{
	if (this->EnergyPoint > 0)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " <<
			target << ", causing " << this->AttackDamege <<
			" point of damage!" << std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << RED << "Not Enough Energy" << std::endl;
	std::cout << WHT << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoint > 0){
		this->HitPoint = this->HitPoint - amount;
		this->AttackDamege = amount;
		std::cout << "ClapTrap " << this->Name << " lost " << amount;
		std::cout << " points!" << std::endl;
		if (this->HitPoint < 0)
		{
			std::cout << this->Name << " died!" << std::endl;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HitPoint > 0 && this->EnergyPoint > 0){
		this->HitPoint = this->HitPoint + amount;
		std::cout << "ClapTrap " << this->Name << " got " << amount;
		std::cout << " points of damage!" << std::endl;
		this->EnergyPoint--;
	}
}

/* ekstra */

void	ClapTrap::last_station(void)
{
	std::cout << BLUE << "-----INFO TIME---- " << std::endl;
	std::cout << YEL << "HEALT POINT: " << this->HitPoint << std::endl;
	std::cout << YEL << "ENERGY POINT: " << this->EnergyPoint << std::endl;
	std::cout << YEL << "ATTACK DAMAGE: " << this->AttackDamege << std::endl;
	std::cout << WHT << std::endl;
}