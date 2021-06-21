/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:32:41 by majermou          #+#    #+#             */
/*   Updated: 2021/06/21 21:22:17 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50)
{
}

// PowerFist::PowerFist(PowerFist const & copy)
// {
//     *this = copy;
// }

// PowerFist&    PowerFist::operator=(PowerFist const & leftOperand)
// {
//     if (this != &leftOperand)
//     {
//         Name = leftOperand.getName();
//         Damage = leftOperand.getDamage();
//         APcost = leftOperand.getAPCost();
//     }
//     return *this;
// }

PowerFist::~PowerFist(void)
{
}

void    PowerFist::attack(void) const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
