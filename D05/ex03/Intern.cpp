/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 09:59:35 by majermou          #+#    #+#             */
/*   Updated: 2021/06/27 11:51:11 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(Intern const &src)
{
    *this = src;
}

Intern& Intern::operator=(Intern const &)
{
    return *this;
}

Intern::~Intern(void)
{
}

Form*   Intern::makeForm(std::string name, std::string target)
{
    int             i = 0;
    std::string     Names[3] = { "shrubbery creation", "robotomy request", "presidential pardon"};
    Form*           (Intern::*functptr[4])(std::string target) =
                                            {

                                            &Intern::CreatShrubberyCreationForm,
                                            &Intern::CreatRobotomyRequestForm,
                                            &Intern::CreatPresidentialPardonForm,
                                            &Intern::NotKnownForm,

                                            };
    while (i < 3 && name.compare(Names[i]))
        i++;
    return ((this->*functptr[i])(target));
}

Form*   Intern::CreatShrubberyCreationForm(std::string target)
{
    Form*   ret = new ShrubberyCreationForm(target);

    std::cout << "Intern creates Shrubbery Creation Form" << std::endl;
    return ret;
}

Form*   Intern::CreatRobotomyRequestForm(std::string target)
{
    Form*   ret = new RobotomyRequestForm(target);

    std::cout << "Intern creates Robotomy Request Form" << std::endl;
    return ret;
}

Form*   Intern::CreatPresidentialPardonForm(std::string target)
{
    Form*   ret = new PresidentialPardonForm(target);

    std::cout << "Intern creates Presidential Pardon Form" << std::endl;
    return ret;
}

Form*   Intern::NotKnownForm(std::string)
{
    std::cout << "Not known Form!!!" << std::endl;
    return nullptr;
}
