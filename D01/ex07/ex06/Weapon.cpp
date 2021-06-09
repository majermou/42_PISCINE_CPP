/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:48:08 by majermou          #+#    #+#             */
/*   Updated: 2021/06/08 19:16:31 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
    return ;
}

std::string const &Weapon::getType(void) const
{
    return this->_type;
}

void                Weapon::setType(std::string type)
{
    this->_type = type;
}
