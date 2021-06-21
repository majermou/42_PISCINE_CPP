/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:55:08 by majermou          #+#    #+#             */
/*   Updated: 2021/06/16 19:27:10 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
    
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &copy);
        ScavTrap &operator=(ScavTrap const & copy);
        ~ScavTrap(void);

        void            challengeNewcomer(void);
        void            Pest_Control(void);
        void            Little_Person_Big_Pain(void);
        void            Die_in_the_Friendly_Skies(void);
        void            Another_Bug_Hunt(void);
        void            Skags_to_Riches(void);

};

#endif