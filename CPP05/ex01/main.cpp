#include "Bureaucrat.hpp"

int main()
{
    std::cout << "************************************\n\n";
    try
    {
        Bureaucrat *nozel = new Bureaucrat("nozel", 99);
        Form *form = new Form("Access library", false, 100, 100);

        form->beSigned(*nozel);
        
        std::cout << *form << '\n';
        
        delete form;
        delete nozel;
    }
    catch (const std::exception &error)
    {
        std::cout << error.what();
    }

    
    std::cout << "\n************************************\n\n";
    try
    {
        Bureaucrat *nozel = new Bureaucrat("nozel", 101);
        Form *form = new Form("Access library", false, 100, 100);

        nozel->signForm(*form);

        std::cout << '\n' << *form << '\n';
        delete form;
        delete nozel;
    }
    catch (const std::exception &error)
    {
        std::cout << error.what();
    }
    std::cout << "\n************************************\n";
    return 0;
}