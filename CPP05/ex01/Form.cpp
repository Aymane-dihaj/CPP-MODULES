#include "Form.hpp"

Form::Form() : name("unkonnu"), grade2sign(150), grade2execute(150)
{
    this->is_signed = false;
}

Form::Form(std::string _name, bool _is_signed, int required_grade_to_sign
        , int required_grade_to_execute) : name(_name), is_signed(_is_signed)
        , grade2sign(required_grade_to_sign), grade2execute(required_grade_to_execute)
{
    if (this->grade2sign > 150 || this->grade2execute > 150)
        throw GradeTooLowException();
    if (this->grade2sign < 1 || this->grade2execute < 1)
        throw GradeTooHighException();
    this->is_signed = _is_signed;
}
Form::Form(const Form& other) : name(other.name), grade2sign(other.grade2sign)
        , grade2execute(other.grade2execute)
{
    *this = other;
}

Form& Form::operator=(const Form& other)
{
    if (this == &other)
        return *this;
    this->is_signed = other.is_signed;
    return *this;
}

void Form::beSigned(Bureaucrat& obj)
{
    if (obj.getGrade() > this->grade2sign)
        throw GradeTooLowException();
    else
        this->is_signed = true;
}

std::string Form::getName() const
{
    return this->name;
}

Form::GradeTooHighException::GradeTooHighException() throw() {}
Form::GradeTooHighException::~GradeTooHighException() throw() {}
const char* Form::GradeTooHighException::what() const throw()
{
    return ("[Form]: Grade is Too high to sign!\n");
}

Form::GradeTooLowException::GradeTooLowException() throw() {}
Form::GradeTooLowException::~GradeTooLowException() throw() {}
const char* Form::GradeTooLowException::what() const throw()
{
    return ("[Form]: Grade is Too low to sign!\n");
}

int Form::getGrade2Sign() const
{
    return this->grade2sign;
}

int Form::getGrade2Execute() const
{
    return this->grade2execute;
}

bool Form::getIsSigned() const
{
    return this->is_signed;
}

std::ostream &operator<<(std::ostream &cout, Form &obj) {
    cout    << "Form name: " << obj.getName()
            << "\nGrade required to sign it: " << obj.getGrade2Sign()
            << "\nGrade required to execute it: " << obj.getGrade2Execute()
            << "\nSigned: " << (obj.getIsSigned() == 0 ? "false" : "true");
    return cout;
}

Form::~Form(){}