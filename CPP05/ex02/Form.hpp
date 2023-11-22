#ifndef Form_HPP
#define Form_HPP


#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const name;
        bool    is_signed;
        const int grade2sign;
        const int grade2execute;
    public:
        Form();
        Form(std::string _name, bool _is_signed, int required_grade_to_sign
        , int required_grade_to_execute);
        Form(const Form& other);
        Form& operator=(const Form& other);
        void beSigned(Bureaucrat& obj);
        void signForm();

        //pure virtual function
        virtual void execute(const Bureaucrat& executor) const = 0;

        std::string getName() const;

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

        class FormIsNotSigned : public std::exception
        {
            public:
                FormIsNotSigned();
                virtual ~FormIsNotSigned() throw();
                virtual const char *what() const throw();
        };

        bool getIsSigned() const;
        int getGrade2Sign() const;
        int getGrade2Execute() const;

};

std::ostream& operator<<(std::ostream& out, Form& src);

#endif