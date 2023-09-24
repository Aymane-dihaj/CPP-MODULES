/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:22:26 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:22:26 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main(int argc, char **argv)
{
    int i = 1;
    int j;

    if (argc > 1)
    {
        while (argv[i])
        {
            j = 0;
            while (argv[i][j])
            {
                if (islower(argv[i][j]))
                    std::cout << (char)toupper(argv[i][j]);
                else
                    std::cout << argv[i][j];
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}