/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:10:12 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 11:38:08 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{

    public:
        
        Character(void);
        Character(std::string const & name);
        Character(Character const &copy);
        Character&      operator=(Character const &leftOperand);
        ~Character(void);

        void            recoverAP();
        void            equip(AWeapon* weapon);
        void            attack(Enemy* enemy);
        std::string     getName(void) const;
        int             getnumAP(void) const;
        std::string     getWeaponName(void) const;
        AWeapon*        getPtr(void) const;

    private:

        std::string     Name;
        int             numAP;
        AWeapon*        ptr;

};

std::ostream&   operator<<(std::ostream &out, Character const &chr);

#endif