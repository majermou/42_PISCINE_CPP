/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:07:28 by majermou          #+#    #+#             */
/*   Updated: 2021/06/08 13:06:12 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
    return ;
}

void    HumanB::setWeapon(Weapon &w_toset)
{
    this->_weapon = &w_toset;
}

void    HumanB::attack(void) const
{
    std::cout   << this->_name << " attacks with his "
                << this->_weapon->getType() << std::endl;   
}