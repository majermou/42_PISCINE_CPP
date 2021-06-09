/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:35:16 by majermou          #+#    #+#             */
/*   Updated: 2021/06/07 14:32:34 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N): nbr(N)
{
    std::cout << "Creating Zombies..." << std::endl;
    this->z_ptr = new Zombie[N]; 
}

ZombieHorde::~ZombieHorde(void)
{
    std::cout << "Destroying Zombies..." << std::endl;
    delete [] z_ptr;
}

void    ZombieHorde::announce(void)
{
    for (int i = 0; i < this->nbr; i++)
        z_ptr[i].announce();
}