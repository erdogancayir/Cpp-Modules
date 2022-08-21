#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "iostream"
#include "string"
#include <iomanip>
#include "stdbool.h"

class Contact{
public:
	std::string name, last_name, nickname, phone_number, darkest_secret;
	int index;
};

class PhoneBook{
public:
	Contact contacts[8];
	void	add_number();
	int		idx;
	bool	is_last;
	void	search();
	void printIndex(int idx);
	std::string check_str(std::string &number);
};


void	PhoneBook::add_number(){
	idx = idx % 8;
	std::cout << "\x1B[36mPlease, enter your first name: \x1B[37m" << std::endl;
	//std::cin.ignore();
	std::getline(std::cin, contacts[idx].name);
	std::cout << "\x1B[36mPlease, enter your last name: \x1B[37m" << std::endl;
	std::getline(std::cin, contacts[idx].last_name);
	std::cout << "\x1B[36mPlease, enter your phone number: \x1B[37m" << std::endl;
	std::getline(std::cin, contacts[idx].phone_number);
	std::cout << "\x1B[36mPlease, enter your nickname: \x1B[37m" << std::endl;
	std::getline(std::cin, contacts[idx].nickname);
	std::cout << "\x1B[36mPlease, enter your darkest secret: \x1B[37m" << std::endl;
	std::getline(std::cin, contacts[idx].darkest_secret);
	contacts[idx].index = idx;
	if (idx < 8)
		idx++;
	if (idx == 8)
		is_last = true;
}

std::string	PhoneBook::check_str(std::string &number){
	if (number.length() <= 10)
		return (number);
	else
		return (number.substr(0,9) + ".");
}

void	PhoneBook::search(){
	int rand;
	std::cout << "\x1B[36m     index|";
	std::cout << "first name| last name|  nickname\x1B[37m" << std::endl;
	if (is_last)
		rand = 8;
	else
		rand = idx;
	for (int i = 0; i < rand; i++){
		std::cout << std::right << std::setw(10) << contacts[i].index;
		std::cout << "|";
		std::cout << std::right << std::setw(10) << check_str(contacts[i].name);
		std::cout << "|";
		std::cout << std::right << std::setw(10) << check_str(contacts[i].last_name);
		std::cout << "|";
		std::cout << std::right << std::setw(10) << check_str(contacts[i].nickname);
		std::cout << "|";
		std::cout << "\n";
	}
	std::cout << "\x1B[36menter a index: \x1B[37m";
	while (1)
	{
		std::cin >> rand;
		if (std::cin.fail()){
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Error wrong number, try again!\n";
		}
		else if (rand < 0)
			std::cout << "Error wrong number, try again!\n";
		else if (rand > idx && !is_last)
			std::cout << "Error wrong number, try again!\n";
		else if (rand < 0 || rand >= 8){
			std::cout << "Error wrong number, try again!\n";
		}
		else
			break ;
	}
	if (rand < idx || (is_last && rand > idx))
		PhoneBook::printIndex(rand);
}

void PhoneBook::printIndex(int idx)
{
	std::cout << "\x1B[36mFirst name : \x1B[37m" + PhoneBook::contacts[idx].name << std::endl;
	std::cout << "\x1B[36mLast name : \x1B[37m" + PhoneBook::contacts[idx].last_name << std::endl;
	std::cout << "\x1B[36mNickname : \x1B[37m" + PhoneBook::contacts[idx].nickname << std::endl;
	std::cout << "\x1B[36mPhone number : \x1B[37m" + PhoneBook::contacts[idx].phone_number << std::endl;
	std::cout << "\x1B[36mDarkest secter : \x1B[37m" + PhoneBook::contacts[idx].darkest_secret << std::endl;
}

#endif