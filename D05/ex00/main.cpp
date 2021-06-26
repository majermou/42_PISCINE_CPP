/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 13:27:42 by majermou          #+#    #+#             */
/*   Updated: 2021/06/26 14:12:15 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main(void)
{

    std::cout   << "\033[0;36mTesting exception thrwoing at Constructer call <GradeTooLow>\033[0m"
                << std::endl << std::endl;
    
    try
    {
        Bureaucrat a("name",200);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout   << std::endl << "\033[0;36mTesting exception thrwoing at Constructer call <GradeTooHigh>\033[0m"
                << std::endl << std::endl;
    
    try
    {
        Bureaucrat b("name", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout   << std::endl << "\033[0;36mTesting exception thrwoing at call to increment()\033[0m"
                << std::endl << std::endl;

    try
    {
        Bureaucrat c("name",1);
        c.incrementGrade();
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout   << std::endl << "\033[0;36mTesting exception thrwoing at call to decrement()\033[0m"
                << std::endl << std::endl;

    try
    {
        Bureaucrat c("name",150);
        c.decrementGrade();
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}