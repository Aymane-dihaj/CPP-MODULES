#include "ShrubberyCreationForm.hpp"
# include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", false, 145, 137)
{
    this->target = "unkonnu";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", false, 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other)
{
    this->target = other.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this == &other)
        return (*this);
    AForm::operator=(other);
    this->target = other.target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

std::string ShrubberyCreationForm::getTarget() const
{
    return (this->target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getIsSigned() == false)
        throw FormIsNotSigned();
    if (executor.getGrade() > this->getGrade2Execute())
        throw GradeTooLowException();
    std::ofstream file((this->getTarget() + "_shrubbery").c_str());
    if (file.is_open())
    {
        file << "       _-_" << std::endl;
        file << "    /~~   ~~\\" << std::endl;
        file << " /~~         ~~\\" << std::endl;
        file << "{               }" << std::endl;
        file << " \\  _-     -_  /" << std::endl;
        file << "   ~  \\\\ //  ~" << std::endl;
        file << "_- -   | | _- _" << std::endl;
        file << "  _ -  | |   -_" << std::endl;
        file << "      // \\\\" << std::endl;
        file.close();
    }
    else
        std::cout << "Error: could not open file" << std::endl;
}