#include "iostream"
#include "cassert"
#include "Bureaucrat.hpp"

int main()
{
	try {
        Bureaucrat bureaucrat("Baho", 2);
        std::cout << bureaucrat << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cerr << "TooHighException" << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cerr << "TooLowException" << std::endl;
    }

    // too high
    try {
        Bureaucrat bureaucrat1("Candis", 1);
        bureaucrat1.incrementGrade();
        std::cout << bureaucrat1 << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cerr << "TooHighException" << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cerr << "TooLowException" << std::endl;
    }

    // too low
    try {
        Bureaucrat bureaucrat2("Omer", 150);
        bureaucrat2.decrementGrade();
        std::cout << bureaucrat2 << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cerr << e.what() << std::endl;
    }
}