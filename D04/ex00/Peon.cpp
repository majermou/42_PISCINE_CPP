/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 14:28:28 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 11:34:51 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
    std::cout << "Bleuark..." << std::endl; 
}

Peon::Peon(Peon const &copy): Victim(copy)
{
}

Peon&   Peon::operator=(Peon const &rightOperand)
{
    if (this != &rightOperand)
        Victim::operator=(rightOperand);
    return *this;
}

void    Peon::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a pink pony!" << std::endl;
}
