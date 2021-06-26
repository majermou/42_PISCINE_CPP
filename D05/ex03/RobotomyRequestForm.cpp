/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:31:24 by majermou          #+#    #+#             */
/*   Updated: 2021/06/26 19:47:36 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):   Form("PresidentialPardonForm", 72, 45), _target(target), _name("RobotomyRequestForm"), 
                                                                _gradTosign(72), _gradToexecute(45),
                                                                ISsigned(false)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): Form(src), _gradTosign(src.getGradeTosign()), _gradToexecute(src.getGradeToexecute())
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
        std::cout << _target << "has been robotomized successfully." << std::endl;
    else
        std::cout << "Failure: " << _target << " hasn't been robotomized." << std::endl;
}

std::ostream&    operator<<(std::ostream &out, RobotomyRequestForm &obj)
{
    if (obj.getFormStatus() == true)
        out << "Form ~{" << obj.getName() << "}~ is Signed." << std::endl;
    else
        out << "Form ~{" << obj.getName() << "}~ is not Signed yet." << std::endl;
    return out;
}

std::string     RobotomyRequestForm::getName(void) const
{
    return _name;
}

bool            RobotomyRequestForm::getFormStatus(void) const
{
    return ISsigned;
}

int             RobotomyRequestForm::getGradeTosign(void) const
{
    return _gradTosign;
}

int             RobotomyRequestForm::getGradeToexecute(void) const
{
    return _gradToexecute;
}

void            RobotomyRequestForm::setFormStatus(void)
{
    ISsigned = true;
}