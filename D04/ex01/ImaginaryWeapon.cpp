/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ImaginaryWeapon.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 11:54:23 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 12:04:18 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ImaginaryWeapon.hpp"

ImaginaryWeapon::ImaginaryWeapon(void) : AWeapon("Imaginary Weapon", 20, 25)
{
}

ImaginaryWeapon::ImaginaryWeapon(ImaginaryWeapon const & copy): AWeapon(copy)
{
}

ImaginaryWeapon&    ImaginaryWeapon::operator=(ImaginaryWeapon const & rightOperand)
{
    if (this != &rightOperand)
    {
        AWeapon::operator=(rightOperand);
    }
    return *this;
}


ImaginaryWeapon::~ImaginaryWeapon(void)
{
}

void    ImaginaryWeapon::attack(void) const
{
    std::cout << "\033[0;33m* pchakh *\033[0m" << std::endl;
}