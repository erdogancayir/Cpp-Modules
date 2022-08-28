#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
public:
	ScavTrap();
	ScavTrap(const str name);
	~ScavTrap();
	ScavTrap(const ScavTrap &oth);
	void attack(const str &target);
	void guardGate();
};

#endif