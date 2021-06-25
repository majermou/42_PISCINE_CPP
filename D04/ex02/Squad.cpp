/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 11:23:16 by majermou          #+#    #+#             */
/*   Updated: 2021/06/24 09:12:19 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void): Units(NULL), numUnits(0)
{
}

Squad::Squad(Squad &copy)
{
    clean();
    *this = copy;
}

Squad &Squad::operator=(Squad &rightOperand)
{
    int     i = 0;
    
    clean();
    if (this != &rightOperand)
    {
        numUnits = rightOperand.getCount();
        Units = new ISpaceMarine *[rightOperand.getCount() + 1];
        while (rightOperand.getUnit(i))
        {
            Units[i] = rightOperand.getUnit(i);
            i++;
        }
        Units[i] = NULL;
    }
    return *this;
}

Squad::~Squad(void)
{
    clean();
}

void    Squad::clean(void)
{
    int i = 0;

    while (Units && Units[i])
    {
        delete Units[i];
        Units[i] = NULL;
        i++;
    }
    delete[] Units;
    Units = NULL;
}

int Squad::getCount(void) const
{
    return numUnits;
}

ISpaceMarine *Squad::getUnit(int Idx) const
{
    if (Units && Idx + 1 <= numUnits)
    {
        return Units[Idx];
    }
    else
        return NULL;
}

int Squad::push(ISpaceMarine *obj)
{
    int i = 0;
    ISpaceMarine **tmp = NULL;

    if (obj)
    {
        while (Units && Units[i])
        {

            if (obj == Units[i])
                return numUnits;
            i++;
        }
        tmp = new ISpaceMarine *[numUnits + 2];
        i = 0;
        while (Units && Units[i])
        {
            tmp[i] = Units[i];
            i++;
        }
        tmp[i++] = obj;
        tmp[i] = NULL;
        Units = tmp;
        numUnits += 1;
    }
    return numUnits;
}
