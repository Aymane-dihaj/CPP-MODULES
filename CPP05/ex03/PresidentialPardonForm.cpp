#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("PresidentialPardonForm", false, 25, 5)
{
    this->target = ("unknown");
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : AForm("PresidentialPardonForm", false, 25, 5) {
    this->setTarget(_target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other) : AForm(other) {
    *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &other) {
    if (this != &other)
    {
        this->setTarget(other.target);
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string PresidentialPardonForm::getTarget() const {
    return (this->target);
}


void PresidentialPardonForm::setTarget(std::string &target) {
    this->target = target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->getIsSigned() == false)
        throw AForm::FormIsNotSigned();
    else if (executor.getGrade() > this->getGrade2Execute())
        throw GradeTooLowException();
    else
        std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
    