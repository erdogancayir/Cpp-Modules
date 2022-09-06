#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): Name("None") {
	this->Grade = 150;
}

Bureaucrat::Bureaucrat(std::string Name, int Grade): Name(Name){
	if (Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->Grade = Grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj){
	*this = obj;
}

Bureaucrat::~Bureaucrat(){
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &obj){
	if (obj.Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (obj.Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->Grade = obj.Grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &obj){
	o << obj.getGrade();
	return (o);
}

std::string	Bureaucrat::getName() const{
	return (this->Name);
}

int	Bureaucrat::getGrade() const{
	return (this->Grade);
}

void	Bureaucrat::incrementGrade(){
	this->Grade--;
	if (this->Grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrementGrade(){
	this->Grade++;
	if (this->Grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("TooHighException");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("TooLowException");
}

void	Bureaucrat::signForm(Form &form){
	try{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;  
	}
	catch(std::exception &oth){
		std::cout << this->getName() << " couldn 't sign " << 
			form.getName() << " because " << oth.what() << std::endl;
	}
}