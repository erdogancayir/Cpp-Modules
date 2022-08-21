#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	private:
		std::string	name;
		Weapon		*weapon_v;
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon &wep);
		void setWeapon(Weapon &wep);
		void		attack(void);
};


#endif