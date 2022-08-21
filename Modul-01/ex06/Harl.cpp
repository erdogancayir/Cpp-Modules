#include "Harl.hpp"

void	harl::debug(void)
{
	std::cout << "\001\033[1;95m\002" << "[DEBUG]   " << "\001\033[0;39m\002";
	std::cout << "I love to get extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << " I just love it!" << std::endl;
}

void	harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon";
	std::cout << "costs more money. You didn’t put enough";
	std::cout << " bacon in my burger! If you did,";
	std::cout << " I wouldn’t be asking for more!" << std::endl;
}

void	harl::error(void)
{
	std::cout << "\001\033[1;91m\002" << "[ERROR]   " << "\001\033[0;39m\002";
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
}

void	harl::warning(void)
{
	std::cout << "\001\033[1;93m\002" << "[WARNING] " << "\001\033[0;39m\002";
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming here for years and you just started ";
	std::cout << "working here last month." << std::endl;
}

void	harl::complain(std::string level)
{
	void		(harl::*p_complain[4])(void) = {&harl::debug, &harl::info, &harl::warning, &harl::error};
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (str[i] == level)
		{
			(this->*p_complain[i])();
			break;
		}
	}
}