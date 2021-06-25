/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:28:21 by majermou          #+#    #+#             */
/*   Updated: 2021/06/25 15:25:28 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat  bureaucrat0("Adi", 1);
        Bureaucrat  bureaucrat1("Alex", 56);
        Form        formX("X", 5, 6);
        Form        formY("Y", 5, 6);

        std::cout << formX;

        bureaucrat0.signForm(formX);

        std::cout << formX;

        std::cout << formY;

        formY.beSigned(bureaucrat1);

        std::cout << formY;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}