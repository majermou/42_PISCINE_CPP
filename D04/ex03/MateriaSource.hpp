/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:02:15 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 18:05:17 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    
    public:
    
        MateriaSource(void);
        MateriaSource(MateriaSource const &copy);
        MateriaSource&   operator=(MateriaSource const &leftOperand);
        virtual ~MateriaSource(void);

        virtual void                learnMateria(AMateria* obj);
        virtual AMateria*           createMateria(std::string const & type);
        AMateria**                  getMateria(void) const;
        int                         getIdx(void) const;

    private:

        void         clean(void);
        AMateria**   materia;
        int          idx;

};

#endif