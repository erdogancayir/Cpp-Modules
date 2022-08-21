#include "iostream"

int	main(int ac, char **av)
{
	int idx = 0;
	if (ac > 1){	
		while (av[++idx]){
			for (int i = 0; i < strlen(av[idx]); i++)
				std::cout << (char)std::toupper(av[idx][i]);
		}
	}
	else if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}