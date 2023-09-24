/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:22:46 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:22:46 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main()
{
    Harl test;
    test.complain("debug");
    std::cout << "==================\n";
    test.complain("error");
    std::cout << "==================\n";
    test.complain("warning");
    std::cout << "==================\n";
    test.complain("info");
    return 0;
}