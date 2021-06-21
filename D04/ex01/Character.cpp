/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:16:56 by majermou          #+#    #+#             */
/*   Updated: 2021/06/21 21:26:56 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name): Name(name), numAP(40), ptr(NULL)
{
}

Character::Character(Character const &copy)
{
    *this = copy;
}

Character::~Character(void)
{
}

Character&      Character::operator=(Character const &leftOperand)
{
    if (this != &leftOperand)
    {
        Name = leftOperand.getName();
    }
    return *this;
}

void    Character::recoverAP(void)
{
    if (numAP + 10 < 40)
        numAP += 10;
    else
        numAP = 40;
}

void    Character::equip(AWeapon* weapon)
{
    ptr = weapon;
}

void    Character::attack(Enemy *enemy)
{
    if (ptr && numAP >= ptr->getAPCost())
    {
        std::cout << Name << " attacks " << enemy->getType() << " with a " << ptr->getName() << std::endl;
        numAP -= ptr->getAPCost();
        ptr->attack();
        enemy->takeDamage(ptr->getDamage());
        if (!enemy->getHP())
            delete enemy;
    }
    
}

std::string     Character::getName(void) const
{
    return Name;
}

int             Character::getnumAP(void) const
{
    return numAP;
}

std::string     Character::getWeaponName(void) const
{
    if (ptr)
        return ptr->getName();
    else
        return NULL;
}

AWeapon*        Character::getPtr(void) const
{
    return ptr;
}

std::ostream&   operator<<(std::ostream &out, Character const &obj)
{
    out << obj.getName() << " has " << obj.getnumAP() << " AP and ";
    if (obj.getPtr())
        out << "wields a " << obj.getWeaponName();
    else
        out << "is unarmed";
    out << std::endl;
    return out;
}
