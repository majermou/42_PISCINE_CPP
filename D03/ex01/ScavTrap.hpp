/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:55:08 by majermou          #+#    #+#             */
/*   Updated: 2021/06/16 18:51:26 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
{
    public:
    
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &copy);
        ~ScavTrap(void);
        ScavTrap        &operator=(ScavTrap const &lopp);
        
        void            rangedAttack(std::string const & target);
        void            meleeAttack(std::string const & target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        
        std::string     getName(void) const;
        int             getHitPoints(void) const;
        int             getEnePoints(void) const;
        int             getLevel(void) const;
        int             getMaxHitPoints(void) const;
        int             getMaxEnergyPoints(void) const;
        int             getMeleeAttackDamage(void) const;
        int             getRangedAttackDamage(void) const;
        int             getArmorDamageReduction(void) const;

        void            challengeNewcomer(void);
        void            Pest_Control(void);
        void            Little_Person_Big_Pain(void);
        void            Die_in_the_Friendly_Skies(void);
        void            Another_Bug_Hunt(void);
        void            Skags_to_Riches(void);

    private:
    
        std::string         _name;
        int                 hit_points;
        int                 energy_points;
        int                 level;
        int const           max_energy_points;
        int const           max_hit_points;
        int const           melee_attack_damage;
        int const           ranged_attack_damage;
        int const           armor_damage_reduction;

};

#endif