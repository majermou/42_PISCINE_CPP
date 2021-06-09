/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:20:35 by majermou          #+#    #+#             */
/*   Updated: 2021/06/07 15:29:06 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void    randomChump(void)
{
    std::string     types[10] = {"A1", "B2", "C3", "D4", "E5", "F6", "G7", "H8", "I9", "J10"};
    std::string     names[10] = {"Nick", "Satoshi", "Alex", "Whatever", "C++", "Leet",
                                "Lisa", "Moh", "Marian", "Linus"};
    int             random = rand() % 10;
    Zombie          zombie = Zombie(names[random], types[random]);

    zombie.announce();
}

void    ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie      *z_ptr = new Zombie(name, this->type);

    return (z_ptr);
}