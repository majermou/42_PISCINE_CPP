/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:56:54 by majermou          #+#    #+#             */
/*   Updated: 2021/06/21 18:32:40 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant: public Enemy
{
    
    public:
    
        SuperMutant(void);
        SuperMutant(SuperMutant const &copy);
        SuperMutant&  operator=(SuperMutant const &leftOperand);
        ~SuperMutant();

        virtual void takeDamage(int damage);
};

#endif