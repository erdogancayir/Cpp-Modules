#pragma once
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"

class RobotomyRequestForm: public Form{
	private:
		std::string Target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string Target);
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		~RobotomyRequestForm();
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &obj);
		void	action() const;
};