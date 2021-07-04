/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:37:27 by majermou          #+#    #+#             */
/*   Updated: 2021/07/04 14:20:59 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>
#include <vector>
#include <list>

int main(void)
{
    int myints[] = { 10, 20, 30, 40 };
    std::vector<int> myvector (myints, myints + sizeof(myints) / sizeof(int));
    std::list<int> mylist (myints, myints + sizeof(myints) / sizeof(int));

    try
    {
        std::vector<int>::iterator it = easyfind(myvector, 20);
        std::cout << *it << std::endl;
        it = easyfind(myvector, 40);
        std::cout << *it << std::endl;
        it = easyfind(myvector, 0);
        std::cout << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::list<int>::iterator it = easyfind(mylist, 10);
        std::cout << *it << std::endl;
        it = easyfind(mylist, 40);
        std::cout << *it << std::endl;
        it = easyfind(mylist, 0);
        std::cout << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}