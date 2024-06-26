#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string _target);
        PresidentialPardonForm(PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(PresidentialPardonForm& other);
        ~PresidentialPardonForm();


        std::string getTarget() const;
        void setTarget(std::string &target);

        void execute(Bureaucrat const & executor) const;
};

#endif