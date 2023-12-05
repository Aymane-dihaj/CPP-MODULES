#ifndef INTERN_HPP
#define INTERN_HPP


#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern
{
    public:
        Intern();
        Intern(Intern const &other);
        ~Intern();
        Intern &operator=(Intern const &other);

        AForm *makeForm(std::string const &formName, std::string const &target);
        
        //methods;
        AForm *makeShrubberyCreationForm(std::string const &target);
        AForm *makeRobotomyRequestForm(std::string const &target);
        AForm *makePresidentialPardonForm(std::string const &target);

        class FormNotFound : public std::exception
        {
            public:
                FormNotFound();
            virtual ~FormNotFound() throw();
            virtual const char *what() const throw();
        };
};

typedef AForm* (Intern::*formPtr[3])(std::string const &target);


#endif