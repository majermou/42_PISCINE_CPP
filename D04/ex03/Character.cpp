/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 16:35:27 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 18:01:58 by majermou         ###   ########.fr       */
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
    clean();
    *this = copy;
}

Character&  Character::operator=(Character const &leftOperand)
{
    if (this != &leftOperand)
    {
        clean();
        Name = leftOperand.getName();
        materia = leftOperand.getMateria();
        index = leftOperand.getIdx();
    }
    return *this;
}

Character::~Character(void)
{
    clean();
}

void    Character::clean(void)
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
