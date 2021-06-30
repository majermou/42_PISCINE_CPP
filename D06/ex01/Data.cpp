/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:16:53 by majermou          #+#    #+#             */
/*   Updated: 2021/06/29 10:41:32 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void): number(11)
{
}

Data::Data(int num): number(num)
{
}

Data::Data(Data const &src)
{
    *this = src;
}

Data&   Data::operator=(Data const &rfs)
{
    if (this != &rfs)
        number = rfs.getNumber();
    return *this;
}

Data::~Data(void)
{
}

int     Data::getNumber(void) const
{
    return number;
}