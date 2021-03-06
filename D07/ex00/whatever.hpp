/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:29:20 by majermou          #+#    #+#             */
/*   Updated: 2021/07/02 10:49:45 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void    swap(T &value1, T &value2)
{
    T   tmp(value1);

    value1 = value2;
    value2 = tmp;
}

template <typename T>
T const max(T const value1, T const value2)
{
    return (value1 > value2 ? value1 : value2);
}

template <typename T>
T const min(T const value1, T const value2)
{
    return (value1 >= value2 ? value2 : value1);
}

#endif