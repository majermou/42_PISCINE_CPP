/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ImaginaryEnemy.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 11:56:37 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 12:04:33 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ImaginaryEnemy.hpp"

ImaginaryEnemy::ImaginaryEnemy(void): Enemy(20, "Imaginary Enemy")
{
    std::cout << "Hi I am the ImaginaryEnemy!" << std::endl;
}

ImaginaryEnemy::ImaginaryEnemy(ImaginaryEnemy const &copy): Enemy(copy)
{
}

ImaginaryEnemy&  ImaginaryEnemy::operator=(ImaginaryEnemy const &rightOperand)
{
    if (this != &rightOperand)
    {
        Enemy::operator=(rightOperand);
    }
    return *this;
}

ImaginaryEnemy::~ImaginaryEnemy()
{
    std::cout << "You got me {***}" << std::endl;
}

void    ImaginaryEnemy::takeDamage(int damage)
{
    if (damage > 0 && HP > 0)
    {
        if (HP - damage + 3 > 0)
            HP -= damage - 3;
        else
            HP = 0;
    }
}