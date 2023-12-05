#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &other) {
    *this = other;
}

Intern::~Intern() {}

Intern &Intern::operator=(Intern const &other) {
    (void)other;
    return *this;
}

AForm *Intern::makeForm(std::string const &formName, std::string const &target)
{
    int i = 0;

    std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    formPtr formPtrs = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};

    while (formName != formNames[i] && i < 3) i++;
    return (i < 3 ? (this->*formPtrs[i])(target) : throw Intern::FormNotFound());
}

Intern::FormNotFound::FormNotFound() {}

Intern::FormNotFound::~FormNotFound() throw() {}

const char *Intern::FormNotFound::what() const throw() {
    return "Form not found";
}


AForm *Intern::makeShrubberyCreationForm(std::string const &target) {
    return new ShrubberyCreationForm(target);
}

AForm *Intern::makeRobotomyRequestForm(std::string const &target) {
    return new RobotomyRequestForm(target);
}

AForm *Intern::makePresidentialPardonForm(std::string const &target) {
    return new PresidentialPardonForm(target);
}