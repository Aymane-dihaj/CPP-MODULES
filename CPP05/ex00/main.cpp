#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat *carl = new Bureaucrat("carl", 150);
        carl->incrementGrade();
        carl->decrementGrade();
        std::cout << carl->getName() << " " << carl->getGrade() << std::endl;
        delete carl;
    }
    catch (const std::exception& exc)
    {
        std::cout << exc.what();
    }
}