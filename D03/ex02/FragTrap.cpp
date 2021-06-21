/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 15:53:15 by majermou          #+#    #+#             */
/*   Updated: 2021/06/16 19:26:33 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    _name = "ExMachina";
    hit_points = 100;
    energy_points = 100;
    level = 1;
    max_energy_points = 100;
    max_hit_points = 100;
    melee_attack_damage = 30;
    ranged_attack_damage = 20;
    armor_damage_reduction = 5;
                           
    std::cout << "ExMachina: Hey everybody! Check out my package!" << std::endl << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    _name = name;
    hit_points = 100;
    energy_points = 100;
    level = 1;
    max_energy_points = 100;
    max_hit_points = 100;
    melee_attack_damage = 30;
    ranged_attack_damage = 20;
    armor_damage_reduction = 5;
    std::cout << _name << ": Let's get this party started!" <<   std::endl << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
    std::cout << "FragTrap Copy constructor called" << std::endl << std::endl;
    *this = copy;
}

FragTrap&   FragTrap::operator=(FragTrap const & copy)
{
    if (this != &copy)
        ClapTrap::operator=(copy);
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "I'll die the way I lived: annoying!" << std::endl << std::endl;
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    void    (FragTrap::*functptr[5])(void) = {
             
                                            &FragTrap::One_Shot_Wonder,
                                            &FragTrap::Clap_In_The_Box,
                                            &FragTrap::Gun_Wizard,
                                            &FragTrap::Torgue_Fiesta,
                                            &FragTrap::Laser_Inferno,
                                    
                                            };
    if (energy_points >= 25)
    {
        std::cout << "\033[1;31m" << _name << " attacks with Random Attack on " << target << " ----> ";
        int random = rand() % 5;
        (this->*functptr[random])();
        energy_points -= 25;
    }
    else
        std::cout << _name <<": Hnngh! Empty!" << std::endl << std::endl;
}

void    FragTrap::One_Shot_Wonder(void)
{
    std::cout << _name << ": One shot, make it count!\033[0m" << std::endl << std::endl; 
}

void    FragTrap::Clap_In_The_Box(void)
{
    std::cout << _name << ": Here, take this!\033[0m" << std::endl << std::endl; 
}

void    FragTrap::Gun_Wizard(void)
{
    std::cout << _name << ": Uh, how do I cast magic missile?\033[0m" << std::endl << std::endl;
}

void    FragTrap::Torgue_Fiesta(void)
{
    std::cout << _name << ": It's time for my free grenade giveaway!\033[0m" << std::endl << std::endl;
}

void    FragTrap::Laser_Inferno(void)
{
    std::cout << _name << ": Laaasers!\033[0m" << std::endl << std::endl;
}