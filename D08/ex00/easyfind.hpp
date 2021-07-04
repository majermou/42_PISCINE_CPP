/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:21:54 by majermou          #+#    #+#             */
/*   Updated: 2021/07/04 12:32:06 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& cont, int val)
{
    typename T::iterator it;
    it = std::find(cont.begin(), cont.end(), val);
    if (it == cont.end())
        throw std::runtime_error("\033[0;31mError: element not found!!!\033[0m");
    return it;
}

#endif