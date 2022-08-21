#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "iostream"
#include "string"
#include "unistd.h"

class zombie
{
	private:
		std::string Name;
	public:
		zombie(std::string name);
		~zombie();
		std::string get_name(void);
		void	announce(void);
};

zombie	*newZombie(std::string name);
void randomChump(std::string name, std::string lit);

#endif