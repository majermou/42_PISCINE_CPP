/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:04:47 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 14:58:09 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{

    public:

        Cure(void);
        Cure(Cure const &copy);
        Cure&    operator=(Cure const &leftOperand);
        virtual ~Cure(void);

        virtual AMateria*       clone(void) const;
        virtual void            use(ICharacter& target);

};

#endif