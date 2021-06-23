/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 12:04:43 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 18:23:01 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISpaceMarine* lol = new TacticalMarine;
    ISpaceMarine* Zack = new AssaultTerminator;
    
    Squad* vlc = new Squad;
    Squad* ptr = new Squad;
    
    vlc->push(bob);
    vlc->push(jim);
    vlc->push(bob);

    ptr->push(Zack);
    ptr->push(lol);
    std::cout << "len = " << vlc->getCount() << "\n";
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    std::cout << "-----------------" << std::endl;
    
    *ptr = *vlc;

    std::cout << "-----------------" << std::endl;

    for (int i = 0; i < ptr->getCount(); ++i)
    {
        ISpaceMarine* cur = ptr->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    
    std::cout << std::endl;
    
    delete vlc;
    
    return 0;
}