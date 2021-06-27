/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:59:03 by majermou          #+#    #+#             */
/*   Updated: 2021/06/27 10:55:33 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:

        Intern(void);
        Intern(Intern const &src);
        Intern& operator=(Intern const &);
        ~Intern(void);

        Form*   makeForm(std::string name, std::string target);

        Form*   CreatShrubberyCreationForm(std::string target);
        Form*   CreatRobotomyRequestForm(std::string target);
        Form*   CreatPresidentialPardonForm(std::string target);
        Form*   NotKnownForm(std::string);
};

#endif