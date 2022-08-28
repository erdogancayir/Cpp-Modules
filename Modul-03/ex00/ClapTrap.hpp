#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "iostream"
# define str std::string

#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLUE "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"
#define NORM "\x1B[0m"

class ClapTrap
{
	private:
		int	AttackDamege;
		int	HitPoint;
		int	EnergyPoint;
		str	Name;
	public:
		ClapTrap();
		ClapTrap(str name, int AttackDamage, int HitPoint, int EnergyPoint);
		ClapTrap(const ClapTrap &oth);
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &oth);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	last_station(void);
};

unsigned int damage_info(unsigned int point);

#endif