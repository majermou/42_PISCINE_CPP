/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 12:56:35 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 14:58:57 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _xp(0), Type(type)
{  
}

AMateria::AMateria(AMateria const &copy)
{
    *this = copy;
}

AMateria::~AMateria(void)
{
}

AMateria&  AMateria::operator=(AMateria const &leftOperand)
{
    if (this != &leftOperand)
        _xp = leftOperand.getXP();
    return *this;
}

std::string const &     AMateria::getType(void) const
{
    return Type;
}

unsigned int            AMateria::getXP(void) const
{
    return _xp;    
}

void    AMateria::use(ICharacter& target)
{
    _xp += 10;
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"  << std::endl;
}
