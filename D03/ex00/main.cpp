/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:30:11 by majermou          #+#    #+#             */
/*   Updated: 2021/06/17 13:52:15 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap    Massina;
    FragTrap    Alex("Alex");
    FragTrap    Bob("Bob");
    FragTrap    Moh;
    

    std::cout << "\033[1;36m------ Game begin level: " << Massina.getLevel() << " ------\033[0m" << std::endl << std::endl;
    std::srand(std::time(NULL));
    
    Alex.rangedAttack("Bob");
    Bob.takeDamage(Bob.getRangedAttackDamage());
    Massina = Bob;
    Bob.meleeAttack("Alex");
    Alex.takeDamage(Alex.getMeleeAttackDamage());
    Alex.vaulthunter_dot_exe("Massina");
    Massina.takeDamage(25);
    Massina.beRepaired(100);
    Alex.vaulthunter_dot_exe("Massina");
    Massina.takeDamage(25);
    Alex.takeDamage(100);
    Alex.takeDamage(100);
    Moh.takeDamage(50);
    Moh.beRepaired(100);

    std::cout << "\033[1;36m------ The End ------\033[0m" << std::endl << std::endl;

    return (0);
}