/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:33:39 by majermou          #+#    #+#             */
/*   Updated: 2021/06/17 11:46:21 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
    _name = "Ninja";
    hit_points = 60;
    energy_points = 120;
    level = 1;
    max_energy_points = 120;
    max_hit_points = 60;
    melee_attack_damage = 60;
    ranged_attack_damage = 5;
    armor_damage_reduction = 0;
                           
    std::cout << "Ninja: Recompiling my combat code!" << std::endl << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
    _name = name;
    hit_points = 60;
    energy_points = 120;
    level = 1;
    max_energy_points = 120;
    max_hit_points = 60;
    melee_attack_damage = 60;
    ranged_attack_damage = 5;
    armor_damage_reduction = 0;
    
    std::cout << _name << ": Glitching weirdness is a term of endearment, right?" <<   std::endl << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy)
{
    std::cout << "NinjaTrap Copy constructor called" << std::endl << std::endl;
    *this = copy;
}

NinjaTrap&   NinjaTrap::operator=(NinjaTrap const & copy)
{
    if (this != &copy)
        ClapTrap::operator=(copy);
    return (*this);
}

NinjaTrap::~NinjaTrap(void)
{
    std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl << std::endl;
}

void        NinjaTrap::ninjaShoebox(ClapTrap const & obj)
{
    std::cout << "Hey ClapTrap " << obj.getName() << " i have a funny joke for you." << std::endl; 
    std::cout << "\033[1;35mDid you hear about the mathematician who’s afraid of negative numbers? He’ll stop at nothing to avoid them.\033[0m" << std::endl << std::endl;
}

void        NinjaTrap::ninjaShoebox(FragTrap const & obj)
{
    std::cout << "Hey FragTrap " << obj.getName() << " i have a funny joke for you." << std::endl;
    std::cout << "\033[1;35mHear about the new restaurant called Karma? There’s no menu: You get what you deserve.\033[0m" << std::endl << std::endl;
}

void        NinjaTrap::ninjaShoebox(ScavTrap const & obj)
{
     std::cout << "Hey ScavTrap " << obj.getName() << " i have a funny joke for you." << std::endl;
     std::cout << "\033[1;35mWhy don’t scientists trust atoms? Because they make up everything.\033[0m" << std::endl << std::endl;
}

void        NinjaTrap::ninjaShoebox(NinjaTrap const & obj)
{
    std::cout << "Hey NinjaTrap " << obj.getName() << " by the way I'm also a Ninjatrap, i have a funny joke for you don't tell the others." << std::endl;
    std::cout << "\033[1;35mA man tells his doctor, “Doc, help me. I’m addicted to Twitter!” The doctor replies, “Sorry, I don’t follow you …”\033[0m" << std::endl << std::endl;
}
