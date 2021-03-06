/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:31:59 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 11:55:47 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon
{

    public:

        PowerFist(void);
        PowerFist(PowerFist const & copy);
        PowerFist&    operator=(PowerFist const & leftOperand);
        virtual ~PowerFist(void);

        void attack(void) const;
};

#endif