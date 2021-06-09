/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:07:03 by majermou          #+#    #+#             */
/*   Updated: 2021/06/08 13:04:43 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public:

        HumanB(std::string name);
        void    setWeapon(Weapon &w_toset);
        void    attack(void) const;

    private:

        std::string     _name;
        Weapon          *_weapon;

};

#endif