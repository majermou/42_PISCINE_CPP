/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ImaginaryWeapon.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 11:53:15 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 11:54:18 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMAGINARYWEAPON_HPP
#define IMAGINARYWEAPON_HPP

#include "AWeapon.hpp"

class ImaginaryWeapon: public AWeapon
{

    public:

        ImaginaryWeapon(void);
        ImaginaryWeapon(ImaginaryWeapon const & copy);
        ImaginaryWeapon&    operator=(ImaginaryWeapon const & leftOperand);
        virtual ~ImaginaryWeapon(void);

        void attack(void) const;
};

#endif