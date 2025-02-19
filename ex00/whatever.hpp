/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <zkaroune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:20:22 by zkaroune          #+#    #+#             */
/*   Updated: 2025/02/19 17:40:36 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_HPP
#   define WHATEVER_HPP

#include <iostream>
template <typename T>

void swap(T &a , T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
template <typename K>
K min(K &a , K &b)
{
    if(a > b)
        return b;
    return b;
      
}
template <typename E>
E max(E &a , E &b)
{
    if(a > b)
        return a;
    return b;
      
}


#endif