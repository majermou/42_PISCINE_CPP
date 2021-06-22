/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 14:50:00 by majermou          #+#    #+#             */
/*   Updated: 2021/06/22 18:33:55 by majermou         ###   ########.fr       */
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
        ~Ice(void);

        virtual AMateria*       clone(void) const;
        virtual void            use(ICharacter& target);

};

#endif