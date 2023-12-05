#include "Bureaucrat.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./PresidentialPardonForm.hpp"

int main()
{
    std::cout << "************************************\n\n";
    try
    {
        PresidentialPardonForm *a = new PresidentialPardonForm("asta");
        Bureaucrat *Nozel = new Bureaucrat("Nozel", 2);

        Nozel->decrementGrade();

        Nozel->signForm(*a);
        std::cout << "==================\n";
        Nozel->executeForm(*a);
        std::cout << "==================\n";

        delete a;
        delete Nozel;
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << '\n';
    }
    std::cout << "\n************************************\n";
    return 0;
}