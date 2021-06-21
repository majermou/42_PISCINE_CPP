/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 13:32:44 by majermou          #+#    #+#             */
/*   Updated: 2021/06/19 16:32:35 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &copy)
{
    std::cout << "Sorcere Copy Constructer Called." << std::endl;
    *this = copy;
}

Sorcerer::~Sorcerer(void)
{
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl; 
}

Sorcerer&   Sorcerer::operator=(Sorcerer const &rightOperand)
{
    std::cout << "Sorcere Assignement Overloaded Operation Called." << std::endl;
    if (this != &rightOperand)
    {
        this->_name = rightOperand.getName();
        this->_title = rightOperand.getTitle();
    }
    return *this;
}

std::string    Sorcerer::getName(void) const
{
    return _name;
}

std::string    Sorcerer::getTitle(void) const
{
    return _title;
}

void    Sorcerer::polymorph(Victim const &victimObj) const
{
    victimObj.getPolymorphed();
}

void    Sorcerer::polymorph(Peon const &PeonObj) const
{
    PeonObj.getPolymorphed();
}

std::ostream&   operator<<(std::ostream &out, Sorcerer const &objTOout)
{
    out << "I am " << objTOout.getName() << ", " << objTOout.getTitle() << ", and I like ponies!" << std::endl;
    return out;
}