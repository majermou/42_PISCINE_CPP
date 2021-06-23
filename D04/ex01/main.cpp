/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 18:27:25 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 15:58:59 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "ImaginaryWeapon.hpp"
#include "ImaginaryEnemy.hpp"

int main()
{
    Character* me = new Character("me");
    
    std::cout << *me;
    
    Enemy* b = new RadScorpion();

    
    AWeapon* pr = new PlasmaRifle();

    AWeapon* mg = new ImaginaryWeapon();
    
    AWeapon* pf = new PowerFist();

    Enemy*   mge = new ImaginaryEnemy();

    
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;

    me->equip(mg);
    std::cout << *me;
    me->attack(mge);
    std::cout << *me;
    me->attack(mge);
    std::cout << *me;
    
    return 0;
}