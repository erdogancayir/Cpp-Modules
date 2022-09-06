#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try {
		Form *SCF = new ShrubberyCreationForm("home"); // form 145 137
		Bureaucrat b1("Bob", 136);
        Bureaucrat b2("Jhon", 145); // 137 execute daha buyuk olmali. yoksa yurutulemez.
        b2.signForm(*SCF);
        b1.executeForm(*SCF); // bu yurutulur. 136 < 137 dusuk. // b2 imzali yaptigi icin oldu.

        b2.executeForm(*SCF); // yurutulemez 137 den buyuk.
        delete SCF;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
	std::cout << std::endl;
	try {
        Form *SCF = new RobotomyRequestForm("home"); //verecegi aksiyon farkli
        Bureaucrat b1("Bob2", 44); // grade > sign olmalı. 44 < 72// form 72 45
        Bureaucrat b2("Jhon2", 72);
        b2.signForm(*SCF);			// 72 <= 72 imzalanir
        b1.executeForm(*SCF);		//  44 <= 45 yurutulur

        b2.executeForm(*SCF);		// 72 <= 45 yurumez
        delete SCF;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
	std::cout << std::endl;
    try {
        Form *SCF = new PresidentialPardonForm("home");
        Bureaucrat b1("Bob2", 5);
        Bureaucrat b2("Jhon2", 24);
        b2.signForm(*SCF);
        b1.executeForm(*SCF);

        b2.executeForm(*SCF);
        delete SCF;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    } 
}

// a bur. a form.