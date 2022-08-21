#include "zombie.hpp"

int main()
{
	std::string request;
	zombie *new_z = newZombie("erdogan");
	new_z->announce();
	std::string response;
	while (1907)
	{
		std::cout << "\x1B[36m███████████████████████*** enter a zombie name and *** ███████████████████████\x1B[37m" << std::endl;
		std::cout << "🎤 ";
		getline(std::cin, request);
		if (request.compare("exit") == 0)
			break ;
		std::cout << "		\x1B[36m███████*** what to say *** ███████\x1B[37m" << std::endl;
		std::cout << "🎤 ";
		getline(std::cin, response);
		randomChump(request, response);
	}
	delete new_z;
}