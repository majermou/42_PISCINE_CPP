/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:20:33 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 11:51:39 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{

    public:

        PlasmaRifle(void);
        PlasmaRifle(PlasmaRifle const & copy);
        PlasmaRifle&    operator=(PlasmaRifle const & leftOperand);
        virtual ~PlasmaRifle(void);

        void attack(void) const;
};

#endif