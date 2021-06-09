/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:01:43 by majermou          #+#    #+#             */
/*   Updated: 2021/06/08 12:54:45 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &my_weapon): _name(name), _weapon(my_weapon)
{
    return ;
}

void    HumanA::attack(void)
{
    std::cout   << this->_name << " attacks with his "
                << this->_weapon.getType() << std::endl;   
}