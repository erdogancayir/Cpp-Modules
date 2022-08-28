#ifndef DIAMOND_HPP
# define DIAMOND_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap{
	private:
		str	Name;
	public:
		DiamondTrap();
		DiamondTrap(str Name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &oth);
		DiamondTrap &operator=(const DiamondTrap &oth);
		using ScavTrap::attack;
		void whoAmI();
};

#endif