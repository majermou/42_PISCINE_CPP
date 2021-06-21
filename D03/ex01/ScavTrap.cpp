/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 19:03:52 by majermou          #+#    #+#             */
/*   Updated: 2021/06/17 14:18:26 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void):   _name("Sofi"), hit_points(100), energy_points(50), level(1),max_energy_points(50),
                            max_hit_points(100), melee_attack_damage(20), ranged_attack_damage(15), armor_damage_reduction(3)
{
    std::cout << "Sofi: Recompiling my combat code!" << std::endl << std::endl;
}

ScavTrap::ScavTrap(std::string name):   _name(name), hit_points(100), energy_points(50), level(1),max_energy_points(50),
                                        max_hit_points(100), melee_attack_damage(20), ranged_attack_damage(15), armor_damage_reduction(3)
{
    std::cout << _name << ": Look out everybody! Things are about to get awesome!" <<   std::endl << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy):   max_energy_points(50), max_hit_points(100),
                                            melee_attack_damage(20), ranged_attack_damage(15), armor_damage_reduction(3)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "I'm too pretty to die!" << std::endl << std::endl;
}

ScavTrap&   ScavTrap::operator=(ScavTrap const &left_operand)
{
    std::cout << "ScavTrap Assignation operator called" << std::endl << std::endl;
    if (this != &left_operand)
    {
        _name = left_operand.getName();
        hit_points = left_operand.getHitPoints();
        energy_points = left_operand.getEnePoints();
        level = left_operand.getLevel();
    }
    return *this;
}

std::string ScavTrap::getName(void) const
{
    return _name;
}

int         ScavTrap::getHitPoints(void) const
{
    return hit_points;
}

int         ScavTrap::getEnePoints(void) const
{
    return energy_points;
}

int ScavTrap::getLevel(void) const
{
    return level;
}

int ScavTrap::getMaxHitPoints(void) const
{
    return  max_hit_points;
}

int ScavTrap::getMaxEnergyPoints(void) const
{
    return  max_energy_points; 
}

int ScavTrap::getMeleeAttackDamage(void) const
{
    return melee_attack_damage; 
}

int ScavTrap::getRangedAttackDamage(void) const
{
    return ranged_attack_damage;
}

int ScavTrap::getArmorDamageReduction(void) const
{
    return armor_damage_reduction;
}

void        ScavTrap::rangedAttack(std::string const & target)
{
    if (energy_points >= ranged_attack_damage)
    {
        std::cout << "\033[1;31m"<< _name << ": All these bullets in just one shot.\033[0m" << std::endl;
        std::cout << "\033[1;31m<< FR4G-TP " << _name << " attacks " << target << " at range, causing "
                    << ranged_attack_damage << " points of damage! >>\033[0m" << std::endl << std::endl;
        energy_points -= ranged_attack_damage;
    }
    else
        std::cout << _name <<": Dangit, I'm out!" << std::endl;
}

void        ScavTrap::meleeAttack(std::string const & target)
{
    if (energy_points >= ranged_attack_damage)
    {
        std::cout << "\033[1;31m"<< _name << ": hey you " << target << " Bop!\033[0m" << std::endl;
        std::cout   << "\033[1;31m<< FR4G-TP " << _name << " combats " << target << ", causing "
                    << melee_attack_damage << " points of damage!\033[0m" << std::endl << std::endl;
        energy_points -= melee_attack_damage;
    }
    else
        std::cout << _name <<": Crap, no more shots left!" << std::endl << std::endl;
}

void        ScavTrap::takeDamage(unsigned int amount)
{
    if (!hit_points)
        std::cout << "\033[1;33m" << _name <<"__Zombie: Am I dead?\033[0m" << std::endl << std::endl;
    else
    {
        std::cout << "\033[1;33m" << _name << ": Ow hohoho, that hurts! Yipes!\033[0m" << std::endl << std::endl;
        if (hit_points < (int)amount - armor_damage_reduction)
        {
            hit_points = 0;
            std::cout << "\033[1;30mThe robot is dead, long live the robot!\033[0m" << std::endl << std::endl;
        }
        else
            hit_points -= amount - armor_damage_reduction;
    }
}

void        ScavTrap::beRepaired(unsigned int amount)
{
    std::cout << "\033[1;32m" << _name << ": I found the cure of death!\033[0m" << std::endl << std::endl;
    if (hit_points + (int)amount > max_hit_points)
        hit_points = max_hit_points;
    else
        hit_points += amount;
    if (energy_points + (int)amount > max_energy_points)
        energy_points = max_energy_points;
    else
        energy_points += amount;
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
