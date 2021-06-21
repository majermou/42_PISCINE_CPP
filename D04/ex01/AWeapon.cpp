/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:12:27 by majermou          #+#    #+#             */
/*   Updated: 2021/06/21 21:21:46 by majermou         ###   ########.fr       */
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

AWeapon&    AWeapon::operator=(AWeapon const & leftOperand) 
{
    if (this != &leftOperand)
    {
        Name = leftOperand.getName();
        Damage = leftOperand.getDamage();
        APcost = leftOperand.getAPCost();
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