/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:02:17 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 18:07:26 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    idx = 0;
    materia = new AMateria*[4];
    for (size_t i = 0; i < 4; i++)
        materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
    clean();
    *this = copy;
}

MateriaSource::~MateriaSource(void)
{
}

MateriaSource&   MateriaSource::operator=(MateriaSource const &leftOperand)
{
    if (this != &leftOperand)
    {
       clean();
        materia = leftOperand.getMateria();
        idx= leftOperand.getIdx();
    }
    return *this;
}

void    MateriaSource::clean(void)
{
    int     i = 0;

    while (materia && materia[i])
    {
        delete materia[i];
        materia[i] = NULL;
        i++;
    }
    delete [] materia;
    materia = NULL;
    
}

AMateria**  MateriaSource::getMateria(void) const
{
    return materia;
}

int  MateriaSource::getIdx(void) const
{   
    return idx;
}

void    MateriaSource::learnMateria(AMateria* obj)
{
    if (idx <= 3 && obj)
    {
        materia[idx] = obj;
        idx += 1;
    }
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < idx; i++)
    {
        if (materia[i]->getType() == type)
            return (materia[i]);
    }
    return NULL;
}
