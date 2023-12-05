#ifndef AForm_HPP
#define AForm_HPP

#include <cstdlib>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string const name;
        bool    is_signed;
        const int grade2sign;
        const int grade2execute;
    public:
        AForm();
        AForm(std::string _name, bool _is_signed, int required_grade_to_sign
        , int required_grade_to_execute);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        void beSigned(Bureaucrat& obj);
        void signAForm();
        virtual ~AForm();

        //pure virtual func
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

std::ostream& operator<<(std::ostream& out, AForm& src);

#endif