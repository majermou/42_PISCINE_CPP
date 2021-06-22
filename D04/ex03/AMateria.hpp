/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 12:55:12 by majermou          #+#    #+#             */
/*   Updated: 2021/06/22 18:36:19 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{

    public:
    
        AMateria(std::string const & type);
        AMateria(AMateria const &copy);
        AMateria&   operator=(AMateria const &leftOperand);
        virtual ~AMateria(void);
    
        
        std::string const &     getType(void) const;
        unsigned int            getXP(void) const;
        virtual AMateria*       clone(void) const = 0;
        virtual void            use(ICharacter& target);
        
    protected:
    
        unsigned int    _xp;
        std::string     Type;

};

#endif