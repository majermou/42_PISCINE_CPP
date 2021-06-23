/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ImaginaryEnemy.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 11:56:39 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 11:58:58 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMAGINARYENEMY_HPP
#define IMAGINARYENEMY_HPP

#include "Enemy.hpp"

class ImaginaryEnemy: public Enemy
{
    
    public:
    
        ImaginaryEnemy(void);
        ImaginaryEnemy(ImaginaryEnemy const &copy);
        ImaginaryEnemy&  operator=(ImaginaryEnemy const &leftOperand);
        virtual ~ImaginaryEnemy(void);

        void takeDamage(int damage);
};

#endif