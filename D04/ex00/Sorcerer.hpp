/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 13:14:57 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 10:29:02 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{

    public:

        Sorcerer(void);
        Sorcerer(std::string name, std::string title);
        Sorcerer(Sorcerer const &copy);
        ~Sorcerer(void);
        Sorcerer&   operator=(Sorcerer const &rightOperand);

        std::string     getName(void) const;
        std::string     getTitle(void) const;
        void            polymorph(Victim const &VictimObj) const;
        void            polymorph(Peon const &PeonObj) const;
        
    private:
    
        std::string     _name;
        std::string     _title;


};

std::ostream&   operator<<(std::ostream &out, Sorcerer const &objTOout);

#endif