/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 15:53:15 by majermou          #+#    #+#             */
/*   Updated: 2021/06/22 09:54:18 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void):   _name("ExMachina"), hit_points(100), energy_points(100), level(1),max_energy_points(100),
                            max_hit_points(100), melee_attack_damage(30), ranged_attack_damage(20), armor_damage_reduction(5)
{
    std::cout << "ExMachina: Hey everybody! Check out my package!" << std::endl << std::endl;
}

FragTrap::FragTrap(std::string name):   _name(name), hit_points(100), energy_points(100), level(1),max_energy_points(100),
                                        max_hit_points(100), melee_attack_damage(30), ranged_attack_damage(20), armor_damage_reduction(5)
{
    std::cout << _name << ": Let's get this party started!" <<   std::endl << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy):   max_energy_points(100), max_hit_points(100),
                                            melee_attack_damage(30), ranged_attack_damage(20), armor_damage_reduction(5)
{
    std::cout << "FragTrap Copy constructor called" << std::endl << std::endl;
    *this = copy;
}

FragTrap::~FragTrap(void)
{
    std::cout << "I'll die the way I lived: annoying!" << std::endl << std::endl;
}

FragTrap&   FragTrap::operator=(FragTrap const &left_operand)
{
    std::cout << "FragTrap Assignation operator called" << std::endl << std::endl;
    if (this != &left_operand)
    {
        _name = left_operand.getName();
        hit_points = left_operand.getHitPoints();
        energy_points = left_operand.getEnePoints();
        level = left_operand.getLevel();
    }
    return *this;
}

std::string FragTrap::getName(void) const
{
    return _name;
}

int         FragTrap::getHitPoints(void) const
{
    return hit_points;
}

int         FragTrap::getEnePoints(void) const
{
    return energy_points;
}

int FragTrap::getLevel(void) const
{
    return level;
}

int FragTrap::getMaxHitPoints(void) const
{
    return  max_hit_points;
}

int FragTrap::getMaxEnergyPoints(void) const
{
    return  max_energy_points; 
}

int FragTrap::getMeleeAttackDamage(void) const
{
    return melee_attack_damage; 
}

int FragTrap::getRangedAttackDamage(void) const
{
    return ranged_attack_damage;
}

int FragTrap::getArmorDamageReduction(void) const
{
    return armor_damage_reduction;
}

void        FragTrap::rangedAttack(std::string const & target)
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

void        FragTrap::meleeAttack(std::string const & target)
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

void        FragTrap::takeDamage(unsigned int amount)
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

void        FragTrap::beRepaired(unsigned int amount)
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