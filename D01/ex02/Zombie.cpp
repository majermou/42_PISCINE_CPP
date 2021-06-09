/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:52:02 by majermou          #+#    #+#             */
/*   Updated: 2021/06/07 12:57:13 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): z_name(name), z_type(type)
{
    std::cout   << "A Zombie named " << this->z_name << " & of type "
                << this->z_type << " was created."<< std::endl;
}

Zombie::~Zombie(void)
{
    std::cout   << "A Zombie named " << this->z_name << " & of type " 
                << this->z_type << " is destroyed." << std::endl;
}

void    Zombie::announce(void) const 
{
    std::cout   << "Hello my name is " << this->z_name 
                << " & Iam a Zombie of type " << this->z_type
                << std::endl;
}