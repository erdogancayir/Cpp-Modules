#pragma once
#include "Form.hpp"
#include "iostream"

class PresidentialPardonForm: public Form{
	private:
		std::string Target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string Target);
		PresidentialPardonForm(const PresidentialPardonForm &obj);
		~PresidentialPardonForm();
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &obj);
		void	action() const;
		Form * clone(std::string Target);
};
