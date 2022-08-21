#include "Harl.hpp"

int find_idx(char *s){
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (levels[i] == s)
			return (i);
	return (-1);
}

int main(int ac, char **av)
{
	harl res;

	if (ac != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	switch (find_idx(av[1]))
	{
	case 0:
		res.complain("DEBUG");
	case 1:
		res.complain("INFO");
	case 2:
		res.complain("WARNING");
	case 3:
		res.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}