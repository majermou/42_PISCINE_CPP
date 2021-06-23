/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 14:54:17 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 15:18:16 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
}

Ice::Ice(Ice const &copy): AMateria(copy)
{
}

Ice::~Ice(void)
{
}

Ice&    Ice::operator=(Ice const &leftOperand)
{
    if (this != &leftOperand)
        AMateria::operator=(leftOperand);
    return *this;
}

AMateria*   Ice::clone(void) const
{
    AMateria*   ret = new Ice();

    return ret;
}

void    Ice::use(ICharacter& target)
{
    _xp += 10;
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"  << std::endl;
}