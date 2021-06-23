/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 11:53:43 by majermou          #+#    #+#             */
/*   Updated: 2021/06/22 09:50:32 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
    _name = "SuperRobot";
    // hit_points = FragTrap::hit_points;
    // energy_points = NinjaTrap::energy_points;
    // level = 1;
    // max_energy_points = NinjaTrap::max_energy_points;
    // max_hit_points = FragTrap::max_hit_points;
    // melee_attack_damage = NinjaTrap::melee_attack_damage;
    // ranged_attack_damage = FragTrap::ranged_attack_damage;
    // armor_damage_reduction = FragTrap::armor_damage_reduction;                 
    std::cout << "Ninja: Recompiling my combat code!" << std::endl << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{
    _name = name;
    // hit_points = FragTrap::hit_points;
    // energy_points = NinjaTrap::energy_points;
    // level = 1;
    // max_energy_points = NinjaTrap::max_energy_points;
    // max_hit_points = FragTrap::max_hit_points;
    // melee_attack_damage = NinjaTrap::melee_attack_damage;
    // ranged_attack_damage = FragTrap::ranged_attack_damage;
    // armor_damage_reduction = FragTrap::armor_damage_reduction;
    std::cout << _name << ": Glitching weirdness is a term of endearment, right?" <<   std::endl << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &copy)
{
    std::cout << "SuperTrap Copy constructor called" << std::endl << std::endl;
    *this = copy;
}

SuperTrap&   SuperTrap::operator=(SuperTrap const & copy)
{
    if (this != &copy)
        ClapTrap::operator=(copy);
    return (*this);
}

SuperTrap::~SuperTrap(void)
{
    std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl << std::endl;
}

// void            SuperTrap::rangedAttack(std::string const & target)
// {
//     FragTrap::rangedAttack(target);
// }

// void            SuperTrap::meleeAttack(std::string const & target)
// {
//     NinjaTrap::meleeAttack(target);
// }
