/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:28:21 by majermou          #+#    #+#             */
/*   Updated: 2021/06/25 12:55:46 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{

    std::cout << "Testing exception thrwoing at Constructer call" << std::endl;
    
    try
    {
        Bureaucrat a("name",200);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    
    try
    {
        Bureaucrat b("name",-5);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "Testing exception thrwoing at call to increment()" << std::endl;

    try
    {
        Bureaucrat c("name",1);
        c.incrementGrade();
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "Testing exception thrwoing at call to increment()" << std::endl;

    try
    {
        Bureaucrat c("name",150);
        c.decrementGrade();
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}