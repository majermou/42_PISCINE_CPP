/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:30:11 by majermou          #+#    #+#             */
/*   Updated: 2021/06/17 14:02:10 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int main(void)
{
    FragTrap    Massina;
    FragTrap    Alex("Alex");
    ScavTrap    Bob("Bob");
    ScavTrap    Moh;
    ClapTrap    GooGle;
    NinjaTrap   Ninja0;
    NinjaTrap   Ninja1;
    

    std::cout << "\033[1;36m------ Game begin level: " << Massina.getLevel() << " ------\033[0m" << std::endl << std::endl;
    std::srand(std::time(NULL));
    
    Alex.rangedAttack("Bob");
    Bob.takeDamage(Bob.getRangedAttackDamage());
    Massina = Alex;
    Bob.meleeAttack("Alex");
    Alex.takeDamage(Alex.getMeleeAttackDamage());
    Alex.vaulthunter_dot_exe("Massina");
    Massina.takeDamage(25);
    Massina.beRepaired(100);
    Alex.vaulthunter_dot_exe("Massina");
    Massina.takeDamage(25);
    Alex.takeDamage(100);
    Alex.takeDamage(100);
    Moh.takeDamage(100);
    Moh.takeDamage(100);

    Ninja0.ninjaShoebox(Massina);
    Ninja0.ninjaShoebox(Bob);
    Ninja0.ninjaShoebox(GooGle);
    Ninja0.ninjaShoebox(Ninja1);
    

    std::cout << "\033[1;36m------ The End ------\033[0m" << std::endl << std::endl;

    return (0);
}