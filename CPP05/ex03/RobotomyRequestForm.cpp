#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm()
    : AForm("RobotomyRequestForm", false, 72, 45)
{
    this->target = ("unknown");
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : AForm("RobotomyRequestForm", false, 72, 45) {
    this->setTarget(_target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other) : AForm(other) {
    *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &other) {
    if (this != &other)
    {
        this->setTarget(other.target);
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string RobotomyRequestForm::getTarget() const {
    return (this->target);
}


void RobotomyRequestForm::setTarget(std::string &target) {
    this->target = target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (this->getIsSigned() == false)
        throw AForm::FormIsNotSigned();
    else if (executor.getGrade() > this->getGrade2Execute())
        throw GradeTooLowException();
    else
    {
        srand(time(0));
        if (rand() % 2)
            std::cout << "The robotmy failed" << std::endl;
        else
            std::cout << "has been robotomized successfully 50% of the time.\n";
    }
}
    