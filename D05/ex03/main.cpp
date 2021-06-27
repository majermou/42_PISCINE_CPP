/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 13:27:42 by majermou          #+#    #+#             */
/*   Updated: 2021/06/27 11:50:56 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

int main(void)
{
    Intern      intern;
    Bureaucrat  bureaucrat0("Satoshi", 1);
    Bureaucrat  bureaucrat1("Tim", 10);
    Bureaucrat  bureaucrat2("Dogogo", 100);
    
    Form*   form0 = intern.makeForm("shrubbery creation", "Home");
    Form*   form1 = intern.makeForm("robotomy request", "SomeTarget");
    Form*   form2 = intern.makeForm("presidential pardon", "Citizen");
    Form*   form3 = intern.makeForm("fwhwro", "wfhewf");

    (void)form3;
    std::cout << std::endl << std::endl;
    
    std::srand(time(NULL));

    try
    {
        std::cout << *form0;
        bureaucrat0.executeForm(*form0);
        std::cout << *form0;
        form0->execute(bureaucrat0);
        std::cout << *form0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << std::endl;

    try
    {
        std::cout << *form0;
        bureaucrat0.signForm(*form0);
        std::cout << *form0;
        bureaucrat0.executeForm(*form0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << std::endl << std::endl;

    try
    {
        std::cout << *form2;
        bureaucrat2.signForm(*form2);
        std::cout << *form2;
        bureaucrat2.executeForm(*form2);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << std::endl;

    try
    {
        std::cout << *form2;
        bureaucrat0.signForm(*form2);
        std::cout << *form2;
        bureaucrat0.executeForm(*form2);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << std::endl << std::endl;
    
    std::cout << *form0;
    bureaucrat0.signForm(*form1);
    std::cout << *form0;

    std::cout << std::endl << std::endl;

    form1->execute(bureaucrat0);
    form1->execute(bureaucrat0);
    form1->execute(bureaucrat0);
    form1->execute(bureaucrat0);
    form1->execute(bureaucrat0);
    
    return 0;
}
