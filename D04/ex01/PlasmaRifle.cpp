/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:24:15 by majermou          #+#    #+#             */
/*   Updated: 2021/06/21 21:22:23 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
}

// PlasmaRifle::PlasmaRifle(PlasmaRifle const & copy)
// {
//     *this = copy;
// }

// PlasmaRifle&    PlasmaRifle::operator=(PlasmaRifle const & leftOperand)
// {
//     if (this != &leftOperand)
//     {
//         Name = leftOperand.getName();
//         Damage = leftOperand.getDamage();
//         APcost = leftOperand.getAPCost();
//     }
//     return *this;
// }

PlasmaRifle::~PlasmaRifle(void)
{
}

void    PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}