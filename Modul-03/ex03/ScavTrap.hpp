#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{
public:
	ScavTrap();
	ScavTrap(const str name);
	~ScavTrap();
	ScavTrap(const ScavTrap &oth);
	virtual void attack(const str &target);
	void guardGate();
};

#endif