#include "RPN.hpp"

RPN::RPN(){}

RPN& RPN::operator=(const RPN&other)
{
    if (this != &other)
    {
        this->_stack = other._stack;
    }
    return *this;
}

RPN::RPN(const RPN& other)
{
    *this = other;
}

RPN::~RPN(){}


void    checkInput(std::string &input)
{
    for (unsigned int i = 0; i < input.length(); i++)
    {
        if (!isdigit(input[i]) && !isblank(input[i]) && input[i] != '/' && input[i] != '*' && input[i] != '-' && input[i] != '+')
		{
			std::cout << "Error" << std::endl;
			exit (0);
		}
    }
}

void    RPN::calculator(std::string &input)
{
    int tmp = 0;
    try
    {
        checkInput(input);
        for (unsigned int i = 0; i < input.length(); i++)
        {
            if (isdigit(input[i]) && isdigit(input[i + 1]))
                throw std::runtime_error("Error");
            if (isdigit(input[i]))
                _stack.push(input[i] - 48);
            else if (input[i] == '*' || input[i] == '/' || input[i] == '-' || input[i] == '+')
            {
                if (_stack.size() < 2)
                    throw std::runtime_error("Error.");
                tmp = _stack.top();
                _stack.pop();
                if (input[i] == '/')
                {
                    if (tmp == 0)
                        throw std::runtime_error("Error");
                    tmp = _stack.top() / tmp;
                }
                else if (input[i] == '*')
                    tmp = _stack.top() * tmp;
                else if (input[i] == '+')
                    tmp = _stack.top() + tmp;
                else if (input[i] == '-')
                    tmp = _stack.top() - tmp;
                _stack.pop();
                _stack.push(tmp);
            }
        }
        if (_stack.size() != 1)
            throw std::runtime_error("Error");
        else
            std::cout << _stack.top() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
}