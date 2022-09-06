#include "iostream"
#include "cassert"
#include "Bureaucrat.hpp"

int main()
{
	try{
		Bureaucrat	dis("Baho", 100);
		Form	f("form", 100, 122);
		std::cout << dis << std::endl;
		dis.signForm(f);
	}
	catch(Bureaucrat::GradeTooHighException &obj){
        std::cerr << "TooHighException" << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &obj){
        std::cerr << "TooLowException" << std::endl;
	}
	std::cout << "🏫🏫 🏫 🏫🏫 🏫 🏫🏫 🏫 🏫🏫 🏫 🏫🏫" << std::endl;
	try
	{
		Form f1 = Form("form1", 10, 5);
		Bureaucrat b1 = Bureaucrat("Bob", 30);
		Bureaucrat b2 = Bureaucrat("Jhon", 1);

		b1.signForm(f1);
		b2.signForm(f1);

		Form f2 = Form("from2", 0, 5);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}