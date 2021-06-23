/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:05:18 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 11:37:04 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &copy): Enemy(copy)
{
}

RadScorpion&  RadScorpion::operator=(RadScorpion const &rightOperand)
{
    if (this != &rightOperand)
    {
        Enemy::operator=(rightOperand);
    }
    return *this;
}


RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

void    RadScorpion::takeDamage(int damage)
{
    if (damage > 0 && HP > 0)
    {
        if (HP - damage > 0)
            HP -= damage;
        else
            HP = 0;
    }
}