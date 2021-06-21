/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:27:30 by majermou          #+#    #+#             */
/*   Updated: 2021/06/17 11:51:28 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):   _name("Machina"), hit_points(100), energy_points(100), level(1), max_hit_points(100),
                            max_energy_points(100), melee_attack_damage(30), ranged_attack_damage(20), armor_damage_reduction(5)
{
    std::cout << "Base Class Default Constructer Called" << std::endl << std::endl;
}

ClapTrap::ClapTrap(std::string name):   _name(name), hit_points(100), energy_points(100), level(1), max_hit_points(100),
                                        max_energy_points(100), melee_attack_damage(30), ranged_attack_damage(20), armor_damage_reduction(5)
{
    std::cout << "Base Class Constructer Called" << std::endl;
    std::cout << _name << ": Let's get this party started!" << std::endl << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Base Classe Distructor Called" << std::endl << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap&   ClapTrap::operator=(ClapTrap const &left_operand)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &left_operand)
    {
        _name = left_operand.getName();
        hit_points = left_operand.getHitPoints();
        energy_points = left_operand.getEnergyPoints();
        max_hit_points = left_operand.getMaxHitPoints();
        max_energy_points = left_operand.getMaxEnergyPoints();
        melee_attack_damage = left_operand.getMeleeAttackDamage();
        ranged_attack_damage = left_operand.getRangedAttackDamage();
        armor_damage_reduction = left_operand.getArmorDamageReduction();
    }
    return *this;
}

std::string ClapTrap::getName(void) const
{
    return _name;
}

int         ClapTrap::getHitPoints(void) const
{
    return hit_points;
}

int         ClapTrap::getEnergyPoints(void) const
{
    return energy_points;
}

int ClapTrap::getLevel(void) const
{
    return level;
}

int ClapTrap::getMaxHitPoints(void) const
{
    return max_hit_points;
}

int ClapTrap::getMaxEnergyPoints(void) const
{
    return max_energy_points;
}

int ClapTrap::getMeleeAttackDamage(void) const
{
    return melee_attack_damage;
}

int ClapTrap::getRangedAttackDamage(void) const
{
    return ranged_attack_damage;
}

int ClapTrap::getArmorDamageReduction(void) const
{
    return armor_damage_reduction;
}

void        ClapTrap::rangedAttack(std::string const & target)
{
    if (energy_points >= ranged_attack_damage)
    {
        std::cout << "\033[1;31m"<< _name << ": You\'re listening to \'Short-Range Damage Radio\'.\033[0m" << std::endl;
        std::cout << "\033[1;31m<< FR4G-TP " << _name << " attacks " << target << " at range, causing "
                    << ranged_attack_damage << " points of damage! >>\033[0m" << std::endl << std::endl;
        energy_points -= ranged_attack_damage;
    }
    else
        std::cout << _name <<": Crap, no more shots left!" << std::endl;
}

void        ClapTrap::meleeAttack(std::string const & target)
{
    if (energy_points >= ranged_attack_damage)
    {
        std::cout << "\033[1;31m"<< _name << ": hey you " << target << " Take that!\033[0m" << std::endl;
        std::cout   << "\033[1;31m<< FR4G-TP " << _name << " combats " << target << ", causing "
                    << melee_attack_damage << " points of damage!\033[0m" << std::endl << std::endl;
        energy_points -= melee_attack_damage;
    }
    else
        std::cout << _name <<": Dangit, I'm out!" << std::endl << std::endl;
}

void        ClapTrap::takeDamage(unsigned int amount)
{
    if (!hit_points)
        std::cout << "\033[1;33m" << _name <<"__Zombie: Am I dead?\033[0m" << std::endl << std::endl;
    else
    {
        std::cout << "\033[1;33m" << _name << ": That looks like it hurts! Health over here!\033[0m" << std::endl << std::endl;
        if (hit_points < (int)amount - armor_damage_reduction)
        {
            hit_points = 0;
            std::cout << "\033[1;30mThe robot is dead, long live the robot!\033[0m" << std::endl << std::endl;
        }
        else
            hit_points -= amount - armor_damage_reduction;
    }
}

void        ClapTrap::beRepaired(unsigned int amount)
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