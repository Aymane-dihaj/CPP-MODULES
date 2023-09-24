/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:43:42 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 12:11:42 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac == 2 && av[1])
    {
        Harl harl;
        harl.complain(av[1]);
    }
    else
    {
        std::cout << "Wrong parameter\n";
        return (1);
    }
    return 0;
}