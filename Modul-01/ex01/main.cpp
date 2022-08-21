#include "zombie.hpp"

int main()
{
	std::string name;
	zombie *zombies;
	int N;

	std::cout << "\x1B[36mEnter number of Zombies in your horde (int): \x1B[37m";
	std::cin >> N;
	std::cin.ignore();
	if (std::cin.fail())
	{
		std::cout << "Wrong input!\n";
		return (1);
	}
	std::cout << "\x1B[36mName of your Zombies: \x1B[37m";
	getline(std::cin, name);
	zombies = zombieHorde(N, name);
	delete[] zombies;
	return (0);
}