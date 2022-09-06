#pragma once
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	Form *forms[3];

public:
	Intern();
	Intern(const Intern &obj);
	~Intern();

	Intern &operator=(const Intern &obj);
	
	Form * makeForm(std::string Type, std::string Target);

	class FromNotFound : public std::exception
	{
	public:
		const char *what() const throw();
	};
};