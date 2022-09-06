#pragma once
#include "Form.hpp"
#include "fstream"

class ShrubberyCreationForm: public Form{
	private:
		std::string Target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string Target);
		ShrubberyCreationForm(const ShrubberyCreationForm &obj);
		~ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &obj);
		void	action() const;
};