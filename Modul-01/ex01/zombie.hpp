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
		zombie();
		~zombie();
		std::string get_name(void);
		void	set_name(std::string name){
			Name = name;
		}
		void	announce(void);
};

zombie	*newZombie(std::string name);
void	randomChump(std::string name, std::string lit);
zombie	*zombieHorde(int N, std::string name);

#endif