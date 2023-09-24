/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:34:05 by adihaj            #+#    #+#             */
/*   Updated: 2023/09/23 12:34:02 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>


class   Nums
{
    public:
        int *n;
        int j;
        std::string name;

        Nums(int num_n, int num_j, std::string name);
        ~Nums();
        Nums(const Nums &numbers)
        {
            std::cout << "copy constructor called\n";
            n = new (int);
            *n = (*numbers.n);
            j = numbers.j;
            this->name = numbers.name;
        }
};


Nums::Nums(int num_n, int num_j, std::string name)
{
    std::cout << "Constructor called\n";
    std::cout << "con debug\n";
    j = num_j;
    (*n) = num_n;
    this->name = name;
}

Nums::~Nums()
{
    std::cout << "Destructor called\n";
}



// int Nums::getn(void) {return n; }

int main()
{
    Nums nb1(2, 3, "Aymane");
    std::cout << "here\n";
    Nums nb2 = nb1;
    *nb1.n = 100;
    std::cout << *nb1.n << std::endl;
    std::cout << nb1.j << std::endl;
    std::cout << nb1.name << std::endl;
    std::cout << "==============\n";
    std::cout << *nb2.n << std::endl;
    std::cout << nb2.j << std::endl;
    std::cout << nb2.name << std::endl;
    Nums a(), b();
    
}