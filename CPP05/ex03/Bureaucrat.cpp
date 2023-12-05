#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("unkonnu"), grade(150) {}

Bureaucrat::Bureaucrat(std::string _name, int grade) : name(_name)
{
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const & other) : name(other.name)
{
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this == &other)
        return *this;
    this->grade = other.grade;
    return *this;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

std::string Bureaucrat::getName() const 
{
    return this->name;
}

void Bureaucrat::incrementGrade()
{
    if (this->grade > 1)
        this->grade--;
    else
        throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    if (this->grade < 150)
        this->grade++;
    else
        throw GradeTooLowException();
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is Too high!\n");
}



Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is Too Low!\n");
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& src)
{
    out << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
    return out;
}

void Bureaucrat::signForm(AForm& form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signs " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->getName() << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void    Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        if (form.getIsSigned() == false)
            throw AForm::FormIsNotSigned();
        else if (this->getGrade() > form.getGrade2Execute())
            throw AForm::GradeTooLowException();
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    catch (const std::exception& exc)
    {
        std::cout << exc.what();
    }
}