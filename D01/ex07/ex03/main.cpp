/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:49:20 by majermou          #+#    #+#             */
/*   Updated: 2021/06/07 15:08:47 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(void)
{
    std::srand(std::time(NULL));
    ZombieHorde     zombie = ZombieHorde(5);

    std::cout << "Time to introduce our lovely Zombies!!!" << std::endl;
    
    zombie.announce();

    return (0);
}