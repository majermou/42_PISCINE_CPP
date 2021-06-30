/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:01:39 by majermou          #+#    #+#             */
/*   Updated: 2021/06/30 16:25:30 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename U, typename W>
void    iter(T arr, U lenght, W fun)
{
    U   it = 0;

    while (it < lenght)
    {
        fun(arr[it]);
        it += 1;
    }
}

template <typename T>
void    apply(T elem)
{
    std::cout << elem << std::endl;
}

#endif