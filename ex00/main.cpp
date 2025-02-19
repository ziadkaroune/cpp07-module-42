/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <zkaroune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:19:55 by zkaroune          #+#    #+#             */
/*   Updated: 2025/02/19 17:46:09 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
    
int main()
{
    int x = 10;
    int y = 16;

    std::string a ="ziad";
    std::string b ="karoune";

     double c = 1.6;
     double d = 2.6;
    std::cout << "----------------swap----------------------" << std::endl;
    std::cout << "x = " << x << " |  y = " << y << std::endl;
    swap<int>(x , y);
    std::cout << "x = " << x << " |  y = " << y << std::endl;
    std::cout << "------------------------------------------------" << std::endl; 
    std::cout << "a = " << a << " |  b = " << b << std::endl;
    swap<char>(a , b);
    std::cout << "a = " << a << " |  b = " << b << std::endl;
    std::cout << "------------------------------------------------" << std::endl; 
    
    std::cout << "c = " << c << " |  d = " << d << std::endl;
    swap<double>(c , d);
    std::cout << "c = " << c << " |  d = " << d << std::endl;
 

    std::cout << "---------------min----------------------" << std::endl;
    std::cout << "x = " << x << " |  y = " << y << std::endl;
     std::cout << min<int>(x , y) << std::endl;
      std::cout << "c = " << c << " |  d = " << d << std::endl;
     std::cout << min<double>(c , d) << std::endl;
     std::cout << "---------------max----------------------" << std::endl;
    std::cout << "x = " << x << " |  y = " << y << std::endl;
     std::cout << max<int>(x , y) << std::endl;
      std::cout << "c = " << c << " |  d = " << d << std::endl;
     std::cout << max<double>(c , d) << std::endl;


     std::cout << "-------------------------------------" << std::endl;

  int w = 2;
  int z = 3;
::swap( w, z );
std::cout << "w = " << w << ", b = " << z<< std::endl;
std::cout << "min( w, z) = " << ::min( w, z) << std::endl;
std::cout << "max( w, z) = " << ::max( w, z) << std::endl;
std::string f = "chaine1";
std::string n = "chaine2";
::swap(f, n);
std::cout << "f = " << f << ", n = " << n << std::endl;
std::cout << "min( f, n ) = " << ::min( f, n ) << std::endl;
std::cout << "max( f, n ) = " << ::max( f, n ) << std::endl;
    
    return 0;
}
