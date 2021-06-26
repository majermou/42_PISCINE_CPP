/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 13:27:42 by majermou          #+#    #+#             */
/*   Updated: 2021/06/26 19:53:42 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    Bureaucrat  bureaucrat0("Satoshi", 1);
    Bureaucrat  bureaucrat1("Tim", 10);
    Bureaucrat  bureaucrat2("Dogogo", 100);
    
    ShrubberyCreationForm form0("Home");
    RobotomyRequestForm   form1("someTarget");
    PresidentialPardonForm  form2("citizen");

    std::srand(time(NULL));

    try
    {
        std::cout << form0;
        bureaucrat0.executeForm(form0);
        std::cout << form0;
        form0.execute(bureaucrat0);
        std::cout << form0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << std::endl;

    try
    {
        std::cout << form0;
        bureaucrat0.signForm(form0);
        std::cout << form0;
        bureaucrat0.executeForm(form0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << std::endl << std::endl;

    try
    {
        std::cout << form2;
        bureaucrat2.signForm(form2);
        std::cout << form2;
        bureaucrat2.executeForm(form2);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << std::endl;

    try
    {
        std::cout << form2;
        bureaucrat0.signForm(form2);
        std::cout << form2;
        bureaucrat0.executeForm(form2);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << std::endl << std::endl;
    
    std::cout << form0;
    bureaucrat0.signForm(form1);
    std::cout << form0;

    std::cout << std::endl << std::endl;

    form1.execute(bureaucrat0);
    form1.execute(bureaucrat0);
    form1.execute(bureaucrat0);
    form1.execute(bureaucrat0);
    form1.execute(bureaucrat0);
    
    return 0;
}
