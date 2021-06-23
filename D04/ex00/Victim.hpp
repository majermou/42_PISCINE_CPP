/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 14:15:20 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 10:59:15 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{

    public:

        Victim(void);
        Victim(std::string name);
        Victim(Victim const &copy);
        Victim&   operator=(Victim const &rightOperand);
        virtual ~Victim(void);

        std::string     getName(void) const;
        std::string     getTitle(void) const;
        virtual void            getPolymorphed(void) const;

    protected:

        std::string     _name;
    
};

std::ostream&   operator<<(std::ostream &out, Victim const &objTOout);

#endif