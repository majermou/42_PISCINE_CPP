/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 11:53:46 by majermou          #+#    #+#             */
/*   Updated: 2021/06/22 10:04:31 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "NinjaTrap.hpp"

class SuperTrap:  public NinjaTrap, public FragTrap
{
    
    public:
        
        SuperTrap(void);
        SuperTrap(std::string name);
        SuperTrap(SuperTrap const &copy);
        SuperTrap        &operator=(SuperTrap const &lopp);
        ~SuperTrap(void);

        // void            rangedAttack(std::string const & target);
        // void            meleeAttack(std::string const & target);

    private:

        int hit_points = FragTrap::hit_points;
        int energy_points = NinjaTrap::energy_points;
        int level = 1;
        int max_energy_points = NinjaTrap::max_energy_points;
        int max_hit_points = FragTrap::max_hit_points;
        int melee_attack_damage = NinjaTrap::melee_attack_damage;
        int ranged_attack_damage = FragTrap::ranged_attack_damage;
        int armor_damage_reduction = FragTrap::armor_damage_reduction;
};

#endif