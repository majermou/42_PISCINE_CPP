/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:01:39 by majermou          #+#    #+#             */
/*   Updated: 2021/07/02 11:43:59 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    iter(T *arr, unsigned int lenght, void (*fun)(T const &))
{
    unsigned int    i = 0;

    while (i < lenght)
    {
        fun(arr[i]);
        i++;
    }
}

#endif