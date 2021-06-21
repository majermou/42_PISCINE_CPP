/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:03:28 by majermou          #+#    #+#             */
/*   Updated: 2021/06/21 18:31:46 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy
{
    
    public:
    
        RadScorpion(void);
        RadScorpion(RadScorpion const &copy);
        RadScorpion&  operator=(RadScorpion const &leftOperand);
        ~RadScorpion();

        virtual void takeDamage(int damage);
};

#endif