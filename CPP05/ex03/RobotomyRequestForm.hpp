#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string _target);
        RobotomyRequestForm(RobotomyRequestForm& other);
        RobotomyRequestForm& operator=(RobotomyRequestForm& other);
        ~RobotomyRequestForm();
        
        std::string getTarget() const;
        void setTarget(std::string &target);

        void execute(Bureaucrat const & executor) const;
};

#endif