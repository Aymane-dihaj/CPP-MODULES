#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string const name;
        int grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string _name, int grade);
        Bureaucrat(Bureaucrat const &other);
        ~Bureaucrat();
        Bureaucrat &operator=(Bureaucrat const &other);
        
        std::string getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();
        void signForm(Form& obj);

        class GradeTooHighException : public std::exception
        {
            public:
                GradeTooHighException() throw();
                virtual ~GradeTooHighException() throw();
                virtual const char* what() const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException() throw();
                virtual ~GradeTooLowException() throw();
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& out, Bureaucrat& src);

#endif