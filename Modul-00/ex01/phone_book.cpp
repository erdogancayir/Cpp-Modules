#include "phone_book.hpp"

void	welcome()
{
	std::cout << "\x1B[36mHi and WELCOME to the -ecayirbook-" << std::endl
			  << "\x1B[32mUse SEARCH to browse your contacts, ADD to add one, "
			  << "and EXIT to... exit\x1B[36m" << std::endl
			  << " ███████████████████████*** MY PHONE BOOK *** ███████████████████████" << std::endl
			  << "What may I do for you today? \x1B[37m";
}

int main()
{
	std::string request;
	PhoneBook directory;

	directory.idx = 0;
	directory.is_last = false;
	welcome();
	while (request.compare("EXIT"))
	{
		std::getline(std::cin, request);
		if (request.compare("ADD") == 0)
			directory.add_number();
		else if (request.compare("SEARCH") == 0)
			directory.search();
		else
			continue;
		std::cout << "What's next? ";
	}
}