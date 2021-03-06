/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:59:34 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 11:35:38 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &copy): Enemy(copy)
{
}

SuperMutant&  SuperMutant::operator=(SuperMutant const &rightOperand)
{
    if (this != &rightOperand)
    {
        Enemy::operator=(rightOperand);
    }
    return *this;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

void    SuperMutant::takeDamage(int damage)
{
    if (damage > 0 && HP > 0)
    {
        if (HP - damage + 3 > 0)
            HP -= damage - 3;
        else
            HP = 0;
    }
}