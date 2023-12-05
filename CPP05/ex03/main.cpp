#include "Bureaucrat.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./PresidentialPardonForm.hpp"
#include "./Intern.hpp"

int main()
{

    //there is an error here pay attention
    std::cout << "************************************\n\n";
    try
    {
        Bureaucrat *nozel = new Bureaucrat("nozel", 4);
        Intern *G = new Intern;
        
        // "robotomy request", "shrubbery creation", "presidential pardon"
        AForm *form = G->makeForm("presidential pardon", "robert");

        std::cout   << "Form Name: "
                    << form->getName() 
                    << ", Target: "
                    << ((PresidentialPardonForm *)form)->getTarget()
                    << '\n';
        nozel->signForm(*form);
        nozel->executeForm(*form);
        delete nozel;
        delete G;
        delete form;
    }
    catch (std::exception &error) {
        std::cout << error.what();
    }

    std::cout << "\n************************************\n";
    return 0;
}
