/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 14:15:17 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 10:40:39 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name): _name(name)
{
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &copy)
{
    *this = copy;
}

Victim::~Victim(void)
{
    std::cout << "Victim " << _name  << " just died for no apparent reason!" << std::endl; 
}

Victim&   Victim::operator=(Victim const &rightOperand)
{
    if (this != &rightOperand)
    {
        _name = rightOperand.getName();
    }
    return *this;
}

std::string    Victim::getName(void) const
{
    return _name;
}

void    Victim::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream&   operator<<(std::ostream &out, Victim const &objTOout)
{
    out << "I'm " << objTOout.getName() << " and I like otters!" << std::endl;
    return out;
}