/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:52:30 by majermou          #+#    #+#             */
/*   Updated: 2021/06/16 19:30:35 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:

        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const &copy);
        FragTrap        &operator=(FragTrap const &lopp);
        ~FragTrap(void);

        void            vaulthunter_dot_exe(std::string const & target);
        void            One_Shot_Wonder(void);
        void            Clap_In_The_Box(void);
        void            Gun_Wizard(void);
        void            Torgue_Fiesta(void);
        void            Laser_Inferno(void);

};


#endif