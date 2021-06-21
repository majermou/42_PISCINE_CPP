/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:31:59 by majermou          #+#    #+#             */
/*   Updated: 2021/06/21 15:32:37 by majermou         ###   ########.fr       */
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
        ~PowerFist(void);

        virtual void attack(void) const;
};

#endif