/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:31:20 by majermou          #+#    #+#             */
/*   Updated: 2021/06/27 09:52:36 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5, target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): Form(src)
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
    std::cout   << getTarget()
                << "\033[0;32m has been pardoned by Zafod Beeblebrox.\033[0m"
                << std::endl;
}
