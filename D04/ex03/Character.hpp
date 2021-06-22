/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 16:28:59 by majermou          #+#    #+#             */
/*   Updated: 2021/06/22 18:20:02 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
    
    public:
    
        Character(void);
        Character(std::string name);
        Character(Character const &copy);
        Character&  operator=(Character const &leftOperand);
        ~Character(void);

        virtual std::string const & getName() const;
        AMateria**                  getMateria(void) const;
        int                         getIdx(void) const;
        virtual void                equip(AMateria* m);
        virtual void                unequip(int idx);
        virtual void                use(int idx, ICharacter& target);
    
    private:
    
        std::string     Name;
        AMateria**      materia;
        int             index;
            
};


#endif