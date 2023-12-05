#include "AForm.hpp"

AForm::AForm() : name("unkonnu"), grade2sign(150), grade2execute(150)
{
    this->is_signed = false;
}

AForm::AForm(std::string _name, bool _is_signed, int required_grade_to_sign
        , int required_grade_to_execute) : name(_name), is_signed(_is_signed)
        , grade2sign(required_grade_to_sign), grade2execute(required_grade_to_execute)
{
    if (this->grade2sign > 150 || this->grade2execute > 150)
        throw GradeTooLowException();
    if (this->grade2sign < 1 || this->grade2execute < 1)
        throw GradeTooHighException();
    this->is_signed = _is_signed;
}
AForm::AForm(const AForm& other) : name(other.name), grade2sign(other.grade2sign)
        , grade2execute(other.grade2execute)
{
    *this = other;
}

AForm& AForm::operator=(const AForm& other)
{
    if (this == &other)
        return *this;
    this->is_signed = other.is_signed;
    return *this;
}

AForm::~AForm() {}

void AForm::beSigned(Bureaucrat& obj)
{
    if (obj.getGrade() > this->grade2sign)
        throw GradeTooLowException();
    else
        this->is_signed = true;
}

std::string AForm::getName() const
{
    return this->name;
}

AForm::GradeTooHighException::GradeTooHighException() throw() {}
AForm::GradeTooHighException::~GradeTooHighException() throw() {}
AForm::GradeTooLowException::GradeTooLowException() throw() {}
AForm::GradeTooLowException::~GradeTooLowException() throw() {}
const char* AForm::GradeTooHighException::what() const throw()
{
    return ("[Form]: Grade is Too high to sign!\n");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("[Form]: Grade is Too low to sign!\n");
}

int AForm::getGrade2Sign() const
{
    return this->grade2sign;
}

int AForm::getGrade2Execute() const
{
    return this->grade2execute;
}

bool AForm::getIsSigned() const
{
    return this->is_signed;
}

std::ostream &operator<<(std::ostream &cout, AForm &obj) {
    cout    << "Form name: " << obj.getName()
            << "\nGrade required to sign it: " << obj.getGrade2Sign()
            << "\nGrade required to execute it: " << obj.getGrade2Execute()
            << "\nSigned?: " << (obj.getIsSigned() == 0? "false" : "true");
    return cout;
}


AForm::FormIsNotSigned::FormIsNotSigned() {}
AForm::FormIsNotSigned::~FormIsNotSigned() throw() {}
const char *AForm::FormIsNotSigned::what() const throw() {
    return ("[Form]: AForm is not signed!\n");
}

