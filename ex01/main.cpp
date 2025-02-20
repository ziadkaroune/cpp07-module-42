/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <zkaroune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:22:59 by zkaroune          #+#    #+#             */
/*   Updated: 2025/02/19 20:24:54 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void increment(int num)
{

	std::cout << num + 1 << " -> "  ;
	return ;
}

void increment_d(double num)
{

	std::cout << num + 1 << " -> "  ;
	return ;
}

void lowerCase(char c)
{
	std::cout << static_cast<char>(tolower(c)) << " -> "  ;
	return ;
}


int main()
{
	int arr[4] = {1, 2, 3, 4};
	double arr_d[] =  {0.2 , 0.3 ,  0.4 } ;
	char arr_c[3] = {'A', 'B', 'C'};
	for(int i = 0 ; i < 4 ; i++)
	{
		std::cout << arr[i] << " ->  " ;
	}
	std::cout << std::endl;
	iter(arr, 4, increment);
	std::cout << std::endl;


	for(int i = 0 ; i < 3 ; i++)
	{
		std::cout << arr_d[i] << " ->  " ;
	}
	std::cout << std::endl;
	iter(arr_d, 4, increment_d);
	std::cout << std::endl;

	 for(int i = 0 ; i < 3 ; i++)
	{
		std::cout << arr_c[i] << " ->  " ;
	}
	std::cout << std::endl;
	iter<char>(arr_c, 3, lowerCase);
	std::cout << std::endl;

	return 0;
}