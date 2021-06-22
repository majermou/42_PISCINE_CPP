/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 16:35:27 by majermou          #+#    #+#             */
/*   Updated: 2021/06/22 18:31:34 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
    Name = name;
    materia = new AMateria*[4];
    for (size_t i = 0; i < 4; i++)
        materia[i] = NULL;
    index = 0;
}

Character::Character(Character const &copy)
{
    for (size_t i = 0; materia[i]; i++)
        delete materia[i];
    delete [] materia;
    *this = copy;
}

Character&  Character::operator=(Character const &leftOperand)
{
    if (this != &leftOperand)
    {
        for (size_t i = 0; materia[i]; i++)
            delete materia[i];
        delete [] materia;
        Name = leftOperand.getName();
        materia = leftOperand.getMateria();
        index = leftOperand.getIdx();
    }
    return *this;
}

Character::~Character(void)
{
    for (size_t i = 0; materia[i]; i++)
        delete materia[i];
    delete [] materia;
}

AMateria**  Character::getMateria(void) const
{
    return materia;
}

int  Character::getIdx(void) const
{   
    return index;
}

std::string const & Character::getName() const
{
    return Name;
}

void    Character::equip(AMateria* m)
{
    if (index <= 3 && m)
    {
        materia[index] = m;
        index += 1;
    } 
}

void    Character::unequip(int idx)
{
    if (materia[idx])
        materia[idx] = NULL;       
}

void    Character::use(int idx, ICharacter& target)
{
    if (materia[idx])
        materia[idx]->use(target);
}
