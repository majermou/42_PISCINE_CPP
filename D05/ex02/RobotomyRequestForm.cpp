/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:31:24 by majermou          #+#    #+#             */
/*   Updated: 2021/06/27 09:51:45 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("PresidentialPardonForm", 72, 45, target)
                                            
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): Form(src)
{
}

RobotomyRequestForm&    RobotomyRequestForm::operator=(RobotomyRequestForm const &rfs)
{
    if (this != &rfs)
    {
        Form::operator=(rfs);
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

void    RobotomyRequestForm::Action(void) const
{
    int     random;
    
    std::cout << "\033[0;33m~~~~~~~drilling noises~~~~drilling noises~~~~~~~~~.\033[0m";
    random = rand() % 2;
    if (!random)
        std::cout << getTarget() << "has been robotomized successfully." << std::endl;
    else
        std::cout << "Failure: " << getTarget() << " hasn't been robotomized." << std::endl;
}
