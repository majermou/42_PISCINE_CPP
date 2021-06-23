/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:32:41 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 11:45:52 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const & copy): AWeapon(copy)
{
}

PowerFist&    PowerFist::operator=(PowerFist const & rightOperand)
{
    if (this != &rightOperand)
    {
        AWeapon::operator=(rightOperand);
    }
    return *this;
}

PowerFist::~PowerFist(void)
{
}

void    PowerFist::attack(void) const
{
    std::cout << "\033[0;31m** pschhh... SBAM! *\033[0m" << std::endl;
}
