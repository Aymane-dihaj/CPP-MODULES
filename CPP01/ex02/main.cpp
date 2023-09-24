/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:20:56 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:20:56 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

# define GREEN "\e[1;32m"
# define RESET "\e[0m"
# define RED "\e[1;91m"
# define CYAN "\e[1;36m"
# define YELLOW "\e[1;33m"
# define PURPLE "\e[1;35m"
# define BLUE "\e[1;34m"

int main()
{
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string& stringREF = var;

    std::cout << CYAN << "The memory address of the string: " << GREEN << &var << RESET << std::endl;
    std::cout << CYAN << "The memory address held by stringPTR: " << GREEN << stringPTR << RESET << std::endl;
    std::cout << CYAN << "The memory address held by stringREF: " << GREEN << &stringREF << RESET << std::endl;
    std::cout << "==============================================\n";
    std::cout << BLUE << "- The value of the string variable: " << YELLOW << var << RESET << std::endl;
    std::cout << BLUE << "- The value pointed to by stringPTR: " << YELLOW << *stringPTR << RESET << std::endl;
    std::cout << BLUE << "- The value pointed by stringREF: " << YELLOW <<stringREF << RESET << std::endl;
    return 0;
}