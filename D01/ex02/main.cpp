/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 12:43:29 by majermou          #+#    #+#             */
/*   Updated: 2021/06/09 10:46:02 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void)
{
    Zombie          *z_ptr = NULL;
    ZombieEvent     z_e_ptr;

    std::cout << "Testing ZombieEvent class..." << std::endl;
    
    z_e_ptr.setZombieType("A1");
    z_ptr = z_e_ptr.newZombie("nick");
    z_ptr->announce();
    delete z_ptr;

    std::cout << "Testing randomChump function..." << std::endl;
    
    std::srand(std::time(NULL));
    randomChump();
    
    return (0);
}