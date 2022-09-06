#pragma once
class Form;
#include "Bureaucrat.hpp"
#include "iostream"

class Form{
    private:
        std::string const   Name;
        bool                IsSigned;
        const int           GradeToSign;
        const int           GradeToExecute;
    public:
        Form();
        Form(std::string Name, int Sing, int Execute);
        Form(const Form &oth);
        ~Form();

        int getSign() const;
        int getExecute() const;

        std::string getName() const;
        bool        getIsSigned() const;

        Form    &operator=(const Form &obj);
        void    beSigned(Bureaucrat & bureaucrat);

        class GradeTooHighException : public std::exception {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &o, const Form &obj);