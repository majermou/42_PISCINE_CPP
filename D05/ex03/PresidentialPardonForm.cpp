/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:31:20 by majermou          #+#    #+#             */
/*   Updated: 2021/06/26 19:49:33 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5),_target(target), _name("PresidentialPardonForm"), 
                                                                    _gradTosign(25), _gradToexecute(5),
                                                                    ISsigned(false)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): Form(src), _gradTosign(src.getGradeTosign()), _gradToexecute(src.getGradeToexecute())
{
}

PresidentialPardonForm&    PresidentialPardonForm::operator=(PresidentialPardonForm const &rfs)
{
    if (this != &rfs)
    {
        Form::operator=(rfs);
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

void    PresidentialPardonForm::Action(void) const
{
    std::cout   << _target
                << "\033[0;32m has been pardoned by Zafod Beeblebrox.\033[0m"
                << std::endl;
}

std::ostream&    operator<<(std::ostream &out, PresidentialPardonForm &obj)
{
    if (obj.getFormStatus() == true)
        out << "Form ~{" << obj.getName() << "}~ is Signed." << std::endl;
    else
        out << "Form ~{" << obj.getName() << "}~ is not Signed yet." << std::endl;
    return out;
}

std::string     PresidentialPardonForm::getName(void) const
{
    return _name;
}

bool            PresidentialPardonForm::getFormStatus(void) const
{
    return ISsigned;
}

int             PresidentialPardonForm::getGradeTosign(void) const
{
    return _gradTosign;
}

int             PresidentialPardonForm::getGradeToexecute(void) const
{
    return _gradToexecute;
}

void            PresidentialPardonForm::setFormStatus(void)
{
    ISsigned = true;
}