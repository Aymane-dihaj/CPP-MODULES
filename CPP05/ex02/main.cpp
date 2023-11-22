#include "Bureaucrat.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./PresidentialPardonForm.hpp"

int main()
{
    std::cout << "************************************\n\n";
    try
    {
        PresidentialPardonForm *a = new PresidentialPardonForm("Killer Ahmed");
        Bureaucrat *Rasheed = new Bureaucrat("Rasheed", 1);

        Rasheed->decrementGrade();

        Rasheed->signForm(*a);
        a->execute(*Rasheed);

        Rasheed->executeForm(*a);

        delete a;
        delete Rasheed;
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << '\n';
    }
    std::cout << "\n************************************\n";
    return 0;
}