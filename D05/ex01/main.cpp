/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 13:27:42 by majermou          #+#    #+#             */
/*   Updated: 2021/06/27 11:40:35 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat  bureaucrat0("Satoshi", 1);
    Bureaucrat  bureaucrat1("Nick", 56);
    Bureaucrat  bureaucrat2("Tim", 8);
    Form        formX("X", 7, 10);
    Form        formY("Y", 10, 10);
    Form        formZ("Z", 2, 10);
    
    
    try
    {
        std::cout << formX;

        bureaucrat2.signForm(formX);

        std::cout << formX;

        formX.beSigned(bureaucrat2);
        
        std::cout << formX;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {

        std::cout << formY;

        bureaucrat1.signForm(formY);

        std::cout << formY;

        formY.beSigned(bureaucrat1);

        std::cout << formY;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    bureaucrat0.signForm(formX);
    bureaucrat0.signForm(formY);
    bureaucrat0.signForm(formZ);

    std::cout << std::endl;

    std::cout << formX;
    std::cout << formY;
    std::cout << formZ;
    
    return 0;
}
