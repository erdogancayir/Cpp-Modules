#include "Form.hpp"

Form::Form(): Name("None"), GradeToSign(1), GradeToExecute(1) {
    this->IsSigned = false;
}

Form::Form(std::string Name, int Sing, int Execute) : Name(Name), GradeToSign(Sing), GradeToExecute(Execute)
{
    if (this->GradeToSign < 1 || this->GradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (this->GradeToSign > 150 || this->GradeToExecute > 150)
        throw  Form::GradeTooLowException();
    this->IsSigned = false;
}

Form::Form(const Form &oth): Name(oth.Name), GradeToSign(oth.GradeToSign), GradeToExecute(oth.GradeToExecute) {
    *this = oth;
}

Form::~Form(){
}

int Form::getSign() const {
    return (this->GradeToSign);
}

int Form::getExecute() const {
    return (this->GradeToExecute);
}

std::string Form::getName() const {
    return (this->Name);
}

bool    Form::getIsSigned() const {
    return (this->IsSigned);
}

Form    &Form::operator=(const Form &obj){
    if (this->GradeToSign < 1 || this->GradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (this->GradeToSign > 150 || this->GradeToExecute > 150)
        throw Form::GradeTooLowException();
    this->IsSigned = obj.IsSigned;
    return *this;
}

void    Form::beSigned(Bureaucrat &bureaucrat){
    if (bureaucrat.getGrade() > this->getSign())
        throw Form::GradeTooLowException();
    this->IsSigned = true;
}

std::ostream    &operator<<(std::ostream &o, const Form &obj){
    o << "name: " << obj.getName() << std::endl
      << "is signed: " << (obj.getIsSigned() ? "yes" : "no") << std::endl
      << "grade to sign: " << obj.getSign() << std::endl
      << "greade to execute: " << obj.getExecute() << std::endl;
    return (o);
}

const char  *Form::GradeTooHighException::what() const throw(){
    return ("Grade Too High");
}

const char  *Form::GradeTooLowException::what() const throw(){
    return ("Grade Too Low");
}
