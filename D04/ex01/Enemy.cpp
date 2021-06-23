/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:37:04 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 11:33:10 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type): HP(hp), Type(type)
{
}

Enemy::Enemy(Enemy const &copy)
{
    *this = copy;
}

Enemy&  Enemy::operator=(Enemy const &rightOperand)
{
    if (this != &rightOperand)
    {
        HP = rightOperand.getHP();
        Type = rightOperand.getType();
    }
    return *this;
}

Enemy::~Enemy()
{
}

int             Enemy::getHP() const
{
    return HP;
}

std::string     Enemy::getType() const
{
    return Type;
}

void    Enemy::takeDamage(int damage)
{
    if (damage > 0 && HP > 0)
    {
        if (HP - damage > 0)
            HP -= damage;
        else
            HP = 0;
    }
}
