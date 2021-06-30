/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:11:08 by majermou          #+#    #+#             */
/*   Updated: 2021/06/30 16:46:10 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


void    fun(double elem)
{
    std::cout << elem << std::endl;
}

int main(void)
{
    double     arr[5] = {3.14, 2.71, 0, 1, 46};
    void    (*fun_ptr)(double) = &apply;

    std::cout << "Testing with A normal function as third param :" << std::endl;
    iter(arr, 5, fun);
    
    std::cout << "Testing with A template function as third param :" << std::endl;
    iter(arr, 5, fun_ptr);
    return 0;
}