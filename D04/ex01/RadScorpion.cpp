/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:05:18 by majermou          #+#    #+#             */
/*   Updated: 2021/06/21 20:31:18 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

// RadScorpion::RadScorpion(RadScorpion const &copy)
// {
//     *this = copy;
// }

// RadScorpion&  RadScorpion::operator=(RadScorpion const &leftOperand)
// {
//     if (this != &leftOperand)
//     {
//         HP = leftOperand.getHP();
//         Type = leftOperand.getType();
//     }
//     return *this;
// }

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

void    RadScorpion::takeDamage(int damage)
{
    if (damage > 0)
    {
        if (HP - damage > 0)
            HP -= damage;
        else
            HP = 0;
    }
}