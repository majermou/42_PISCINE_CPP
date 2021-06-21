/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 19:03:52 by majermou          #+#    #+#             */
/*   Updated: 2021/06/17 13:59:04 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    _name = "Sofi";
    hit_points = 100;
    energy_points = 50;
    level = 1;
    max_energy_points = 50;
    max_hit_points = 100;
    melee_attack_damage = 20;
    ranged_attack_damage = 15;
    armor_damage_reduction = 3;
    std::cout << "Sofi: Recompiling my combat code!" << std::endl << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    _name = name;
    hit_points = 100;
    energy_points = 50;
    level = 1;
    max_energy_points = 50;
    max_hit_points = 100;
    melee_attack_damage = 20;
    ranged_attack_damage = 15;
    armor_damage_reduction = 3;
    std::cout << _name << ": Look out everybody! Things are about to get awesome!" <<   std::endl << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl << std::endl;
    *this = copy;
}

ScavTrap&   ScavTrap::operator=(ScavTrap const & copy)
{
    if (this != &copy)
        ClapTrap::operator=(copy);
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "I'm too pretty to die!" << std::endl << std::endl;
}

void    ScavTrap::challengeNewcomer(void)
{
    void    (ScavTrap::*functptr[5])(void) = {
             
                                            &ScavTrap::Pest_Control,
                                            &ScavTrap::Little_Person_Big_Pain,
                                            &ScavTrap::Die_in_the_Friendly_Skies,
                                            &ScavTrap::Another_Bug_Hunt,
                                            &ScavTrap::Skags_to_Riches,
                                    
                                            };

    std::srand(std::time(NULL));
    int random = rand() % 5;
    (this->*functptr[random])();
}

void    ScavTrap::Pest_Control(void)
{
    std::cout << "\033[1;31m" << _name << ": Killing spiderants.\033[0m" << std::endl; 
}

void    ScavTrap::Little_Person_Big_Pain(void)
{
    std::cout << "\033[1;31m" << _name << ": Killing midgets.\033[0m" << std::endl; 
}

void    ScavTrap::Die_in_the_Friendly_Skies(void)
{
    std::cout << "\033[1;31m" << _name << ": Kill_buzzards.\033[0m" << std::endl;
}

void    ScavTrap::Another_Bug_Hunt(void)
{
    std::cout << "\033[1;31m" << _name << ": Kill_varkids.\033[0m" << std::endl;
}

void    ScavTrap::Skags_to_Riches(void)
{
    std::cout << "\033[1;31m" << _name << ": Killing skags.\033[0m" << std::endl;
}