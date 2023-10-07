/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adihaj <adihaj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:00:22 by adihaj            #+#    #+#             */
/*   Updated: 2023/10/05 23:00:31 by adihaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"
# include "Point.hpp"

int main()
{

    Point a(0, 0);
    Point b(20, 0);
    Point c(10, 30);
    Point p(10, 15);

   if (bsp(a, b, c, p))
     std::cout << "Inside" << std::endl; 
   else
     std::cout << "Not Inside" << std::endl;
  
   return 0;
}
