/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:37:02 by majermou          #+#    #+#             */
/*   Updated: 2021/06/21 20:50:11 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{
    
    protected:
    
        int             HP;
        std::string     Type;

    public:
        
        Enemy(void);
        Enemy(int hp, std::string const & type);
        Enemy(Enemy const &copy);
        Enemy&  operator=(Enemy const &leftOperand);
        virtual ~Enemy();
        
        int             getHP() const;
        std::string     getType() const;
        
        virtual void takeDamage(int damage);
};

#endif