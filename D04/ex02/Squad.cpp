/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 11:23:16 by majermou          #+#    #+#             */
/*   Updated: 2021/06/22 12:24:51 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void): numUnits(0), Units(NULL)
{
}

Squad::Squad(Squad const &copy)
{
    *this = copy;
}

Squad&  Squad::operator=(Squad const &leftOperand)
{
    if (this != &leftOperand)
    {
        numUnits = leftOperand.getCount();
        Units = leftOperand.getUnits();
    }
    return *this;
}

Squad::~Squad(void)
{  
    if (Units)
    { 
        for (size_t i = 0; Units[i]; i++)
        {
            delete Units[i];
        }
        delete [] Units;
    }
    
}

ISpaceMarine**      Squad::getUnits(void) const
{
    return Units;
}

int             Squad::getCount(void) const
{
    return numUnits;
}

ISpaceMarine*   Squad::getUnit(int N) const
{
    if (Units && N + 1 <= numUnits)
    {
        return Units[N];
    }
    else
        return NULL;
}

int             Squad::push(ISpaceMarine* obj)
{
    if (obj)
    {
        if (Units)
        {
            for (size_t i = 0; Units[i]; i++)
            {
                if (obj == Units[i])
                    return numUnits;
            }
        }
        ISpaceMarine    **tmp = new ISpaceMarine*[numUnits + 2];
        int             i = 0;
        while (Units && Units[i])
        {
            tmp[i] = Units[i];
            i++;
        }
        tmp[i++] = obj;
        tmp[i] = NULL;
        if (Units)
            delete [] Units;
        Units = tmp;
        numUnits += 1;
    }
    return numUnits;
}
