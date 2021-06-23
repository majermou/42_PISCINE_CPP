/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 14:54:21 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 11:25:39 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{

    public:
        
        AWeapon(void);
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(AWeapon const & copy);
        AWeapon&    operator=(AWeapon const & rightOperand);
        virtual ~AWeapon(void);
    
        std::string     getName(void) const;
        int             getAPCost(void) const;
        int             getDamage(void) const;

        virtual void attack(void) const = 0;
    
    protected:
    
        std::string     Name;
        int             APcost;
        int             Damage;

};

#endif