/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 14:34:11 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 10:54:21 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Test.hpp"
#include "Victim.hpp"
#include "Sorcerer.hpp"

int main(void)
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Peon Zack = joe;
    Victim* ptr = new Test("Geek");
    
    
    std::cout << robert << jim << joe << Zack << *ptr;
    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(Zack);
    robert.polymorph(*ptr);

    delete ptr;
    
    return 0;
}