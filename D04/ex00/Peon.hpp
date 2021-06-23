/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 14:28:32 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 11:51:16 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon: public Victim
{
    public:

        Peon(void);
        Peon(std::string name);
        Peon(Peon const &copy);
        Peon&   operator=(Peon const &rightOperand);
        virtual ~Peon(void);

        void            getPolymorphed(void) const;

};

#endif