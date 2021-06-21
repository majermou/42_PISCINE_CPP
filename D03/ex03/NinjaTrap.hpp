w/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:33:43 by majermou          #+#    #+#             */
/*   Updated: 2021/06/17 11:20:09 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap
{
    
    public:
        
        NinjaTrap(void);
        NinjaTrap(std::string name);
        NinjaTrap(NinjaTrap const &copy);
        NinjaTrap        &operator=(NinjaTrap const &lopp);
        ~NinjaTrap(void);

        void        ninjaShoebox(ClapTrap const & obj);
        void        ninjaShoebox(FragTrap const & obj);
        void        ninjaShoebox(ScavTrap const & obj);
        void        ninjaShoebox(NinjaTrap const & obj);
};


#endif