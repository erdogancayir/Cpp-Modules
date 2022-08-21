#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
	private:
		std::string	Name;
		Weapon		&weapon_v;
	public:
		HumanA(std::string name, Weapon &wep);
		void		attack(void);
};



#endif