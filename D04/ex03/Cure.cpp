/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:04:40 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 14:58:35 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
}

Cure::Cure(Cure const &copy): AMateria(copy)
{
}

Cure::~Cure(void)
{
}

Cure&    Cure::operator=(Cure const &leftOperand)
{
    if (this != &leftOperand)
        AMateria::operator=(leftOperand);
    return *this;
}


AMateria*   Cure::clone(void) const
{
    AMateria*   ret = new Cure();

    return ret;
}

void    Cure::use(ICharacter& target)
{
    _xp += 10;
    std::cout << "* heals " << target.getName() << "’s wounds *"  << std::endl;
}