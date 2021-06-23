/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 14:50:00 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 14:58:14 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{

    public:
        
        Ice(void);
        Ice(Ice const &copy);
        Ice&    operator=(Ice const &leftOperand);
        virtual ~Ice(void);

        virtual AMateria*       clone(void) const;
        virtual void            use(ICharacter& target);

};

#endif