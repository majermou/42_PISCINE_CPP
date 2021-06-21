/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:52:30 by majermou          #+#    #+#             */
/*   Updated: 2021/06/16 17:42:31 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
    public:

        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const &copy);
        ~FragTrap(void);
        FragTrap        &operator=(FragTrap const &lopp);

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

        void            vaulthunter_dot_exe(std::string const & target);
        void            One_Shot_Wonder(void);
        void            Clap_In_The_Box(void);
        void            Gun_Wizard(void);
        void            Torgue_Fiesta(void);
        void            Laser_Inferno(void);

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