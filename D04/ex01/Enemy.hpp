/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:37:02 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 11:32:56 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{

    public:
        
        Enemy(void);
        Enemy(int hp, std::string const & type);
        Enemy(Enemy const &copy);
        Enemy&  operator=(Enemy const &rightOperand);
        virtual ~Enemy();
        
        int             getHP() const;
        std::string     getType() const;
        
        virtual void takeDamage(int damage);

    protected:
    
        int             HP;
        std::string     Type;
};

#endif