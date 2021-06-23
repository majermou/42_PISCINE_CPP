/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:56:54 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 11:59:13 by majermou         ###   ########.fr       */
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
        virtual ~SuperMutant(void);

        void takeDamage(int damage);
};

#endif