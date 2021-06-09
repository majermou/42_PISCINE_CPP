/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:52:02 by majermou          #+#    #+#             */
/*   Updated: 2021/06/07 15:17:59 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::string     types[10] = {"A1", "B2", "C3", "D4", "E5", "F6", "G7", "H8", "I9", "J10"};
    std::string     names[10] = {"Nick", "Satoshi", "Alex", "Whatever", "C++", "Leet",
                                "Lisa", "Moh", "Marian", "Linus"};

    int random = rand() % 10;
    this->z_name = names[random];
    this->z_type = types[random];
    std::cout   << "Zombie " << this->z_name << " was created." << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout   << "Zombie " << this->z_name << " was destroyed." << std::endl;
}

void    Zombie::announce(void) const 
{
    std::cout   << "Hello my name is " << this->z_name 
                << " & Iam a Zombie of type " << this->z_type
                << std::endl;
}