/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <zkaroune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:24:34 by zkaroune          #+#    #+#             */
/*   Updated: 2025/02/19 20:23:22 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP	
#	define ITER_HPP	
#include <iostream>


template <typename T  >
void iter(T *arr , int arr_size ,  T (*func)(T))
{
	int  i = 0;
	while(i < arr_size)
	{
		func(arr[i]);
		std::cout << "saldnasl" << std::endl;
		i++;
	}
}


#endif
