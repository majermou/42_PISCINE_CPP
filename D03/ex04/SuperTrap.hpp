/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 11:53:46 by majermou          #+#    #+#             */
/*   Updated: 2021/06/17 17:04:47 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "NinjaTrap.hpp"

class SuperTrap: public NinjaTrap, public FragTrap
{
    
    public:
        
        SuperTrap(void);
        SuperTrap(std::string name);
        SuperTrap(SuperTrap const &copy);
        SuperTrap        &operator=(SuperTrap const &lopp);
        ~SuperTrap(void);

        // void            rangedAttack(std::string const & target);
        // void            meleeAttack(std::string const & target);
};

#endif