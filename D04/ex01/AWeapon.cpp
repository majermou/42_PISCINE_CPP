/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:12:27 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 11:25:29 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage): Name(name), APcost(apcost), Damage(damage)
{
}

AWeapon::~AWeapon(void)
{
}

AWeapon::AWeapon(AWeapon const & copy)
{
    *this = copy;
}

AWeapon&    AWeapon::operator=(AWeapon const & rightOperand) 
{
    if (this != &rightOperand)
    {
        Name = rightOperand.getName();
        Damage = rightOperand.getDamage();
        APcost = rightOperand.getAPCost();
    }
    return *this;
}

std::string     AWeapon::getName(void) const
{
    return Name;
}

int             AWeapon::getAPCost(void) const
{
    return APcost;
}

int             AWeapon::getDamage(void) const
{
    return Damage;
}