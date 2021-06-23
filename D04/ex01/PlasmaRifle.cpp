/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:24:15 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 11:45:38 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & copy): AWeapon(copy)
{
}

PlasmaRifle&    PlasmaRifle::operator=(PlasmaRifle const & rightOperand)
{
    if (this != &rightOperand)
    {
        AWeapon::operator=(rightOperand);
    }
    return *this;
}


PlasmaRifle::~PlasmaRifle(void)
{
}

void    PlasmaRifle::attack(void) const
{
    std::cout << "\033[0;34m* piouuu piouuu piouuu *\033[0m" << std::endl;
}