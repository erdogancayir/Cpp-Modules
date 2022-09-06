#pragma once

#include "iostream"

class	Bureaucrat{
	private:
		std::string	Name;
		int			Grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string Name, int Grade);
		Bureaucrat(const Bureaucrat &obj);
		~Bureaucrat();

		Bureaucrat	&operator=(const Bureaucrat &obj);
		std::string	getName() const;
		int			getGrade() const;

		class GradeTooHighException : public std::exception
		{
		public:
			const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
		public:
			const char *what() const throw();
		};

		void	incrementGrade();
		void	decrementGrade();
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &obj);