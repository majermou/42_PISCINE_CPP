/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 14:54:21 by majermou          #+#    #+#             */
/*   Updated: 2021/06/21 20:34:18 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{
    protected:
    
        std::string     Name;
        int             APcost;
        int             Damage;

    public:
        
        AWeapon(void);
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(AWeapon const & copy);
        AWeapon&    operator=(AWeapon const & leftOperand);
        virtual ~AWeapon(void);
    
        std::string     getName(void) const;
        int             getAPCost(void) const;
        int             getDamage(void) const;

        virtual void attack(void) const = 0;
};

#endif