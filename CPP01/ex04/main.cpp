/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:20:06 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/21 10:20:06 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



# include <fstream>
# include <iostream>
# include <string>

std::string     _replace(std::string line, std::string replace_this, std::string replace_with)
{
    int start = line.find(replace_this);
    if (start != -1)
    {
        line.erase(start, replace_this.length());
        line.insert(start, replace_with);
    }
    return line;
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string filename;
        std::string line;
        filename = av[1];
        std::fstream input_file(av[1], std::fstream::in);
        if (!input_file.is_open())
            return (std::cout << "File Error\n", 1);
        std::ofstream outfile(filename.append(".replace"));
        std::string str1 = av[2];
        std::string str2 = av[3];
        if (str1.empty() || str2.empty())
            return (std::cout << "Error\n", 1);
        while(std::getline(input_file, line))
        {
            line = _replace(line, str1, str2);
            outfile << line << std::endl;
        }
    }
    else
        std::cout << "Wrong number of arguments\n";
    return 0;
}