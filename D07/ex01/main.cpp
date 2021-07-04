/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:11:08 by majermou          #+#    #+#             */
/*   Updated: 2021/07/02 11:43:15 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void    apply(T const &elem)
{
    std::cout << elem << std::endl;
}

void    fun(double const & elem)
{
    std::cout << elem << std::endl;
}

int main(void)
{
    double     arr[5] = {3.14, 2.71, 0, 1, 46};

    std::cout << "Testing with A normal function as third param :" << std::endl;
    iter(arr, 5, apply);
    
    std::cout << "Testing with A template function as third param :" << std::endl;
    iter(arr, 5, fun);
    return 0;
}
