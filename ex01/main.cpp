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

int increment(int num)
{
	return (num + 1) ;
}


int main()
{

	int arr[4] = {1 , 2 ,3 , 4} ;
	for(int i = 0 ; i < 4 ; i++)
		std::cout << arr[i] << " -> " ;
	std::cout << std::endl;
	 ::iter<int>(arr , 4 , increment);
	
	for(int i = 0 ; i < 4 ; i++)
		std::cout << arr[i] << " -> " ;
	 

return 0;
}
