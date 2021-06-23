/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 10:50:23 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 10:51:38 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Test.hpp"

Test::Test(std::string name): Victim(name)
{
    std::cout << "Hello World" << std::endl;
}

Test::~Test(void)
{
    std::cout << "The end of my World" << std::endl; 
}

Test::Test(Test const &copy): Victim(copy)
{
}

Test&   Test::operator=(Test const &rightOperand)
{
    if (this != &rightOperand)
        Victim::operator=(rightOperand);
    return *this;
}

void    Test::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a lovely cow!" << std::endl;
}