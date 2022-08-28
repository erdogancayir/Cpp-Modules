#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap_trap("john", 0, 30, 2);

	std::cout << "Basic test: " << std::endl;
	clap_trap.takeDamage(20);
	clap_trap.beRepaired(100);
	clap_trap.attack("bahoooo");
	clap_trap.attack("bahoooo");
	clap_trap.attack("bahoooo");
	clap_trap.last_station();
}