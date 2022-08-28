#ifndef FIXEDTRAP_HPP
# define FIXEDTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap{
	public:
		FragTrap();
		FragTrap(const str name);
		FragTrap(const FragTrap &oth);
		~FragTrap();
		FragTrap	&operator=(const FragTrap &oth);
		virtual void attack(const str &target);
		void highFivesGuys();
};


#endif