/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:27:34 by majermou          #+#    #+#             */
/*   Updated: 2021/06/17 17:06:24 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    public:

        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &copy);
        ClapTrap        &operator=(ClapTrap const &lopp);
        ~ClapTrap(void);
        
        virtual void     rangedAttack(std::string const & target);
        virtual void     meleeAttack(std::string const & target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        
        std::string     getName(void) const;
        int             getHitPoints(void) const;
        int             getEnergyPoints(void) const;
        int             getLevel(void) const;
        int             getMaxHitPoints(void) const;
        int             getMaxEnergyPoints(void) const;
        int             getMeleeAttackDamage(void) const;
        int             getRangedAttackDamage(void) const;
        int             getArmorDamageReduction(void) const;

    protected:

        std::string         _name;
        int                 hit_points;
        int                 energy_points;
        int                 level;
        int                 max_hit_points;
        int                 max_energy_points;
        int                 melee_attack_damage;
        int                 ranged_attack_damage;
        int                 armor_damage_reduction;

};

#endif