/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 11:08:03 by majermou          #+#    #+#             */
/*   Updated: 2021/06/24 09:11:17 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &copy)
{
    *this = copy;
}

AssaultTerminator::~AssaultTerminator(void)
{
    std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const &rightOperand)
{
    (void)rightOperand;
    return *this;
}


ISpaceMarine*   AssaultTerminator::clone(void) const
{
    return new AssaultTerminator(*this);
}

void            AssaultTerminator::battleCry(void) const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void            AssaultTerminator::rangedAttack(void) const
{
    std::cout << "* does nothing *" << std::endl;
}

void            AssaultTerminator::meleeAttack(void) const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}