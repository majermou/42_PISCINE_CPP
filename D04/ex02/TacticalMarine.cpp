/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:51:17 by majermou          #+#    #+#             */
/*   Updated: 2021/06/24 09:11:12 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &copy)
{
    *this = copy;
}

TacticalMarine::~TacticalMarine(void)
{
    std::cout << "Aaargh..." << std::endl;
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const &rightOperand)
{
    (void)rightOperand;
    return *this;
}


ISpaceMarine*   TacticalMarine::clone(void) const
{
    return new TacticalMarine(*this);
}

void            TacticalMarine::battleCry(void) const
{
    std::cout << "For the holy PLOT!" << std::endl;
}

void            TacticalMarine::rangedAttack(void) const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void            TacticalMarine::meleeAttack(void) const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}
