/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:18:18 by majermou          #+#    #+#             */
/*   Updated: 2021/06/12 19:48:25 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): raw_bits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const num): raw_bits(num << 8)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const real_num)
{
    std::cout << "Float constructor called" << std::endl;
    float x = real_num;
    for (size_t i = 0; i < 8; i++)
        x *= 2;
    raw_bits = roundf(x);
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed&  Fixed::operator=(Fixed const &rfs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rfs)
        this->raw_bits = rfs.getRawBits();
    return *this;
}

int     Fixed::getRawBits(void) const
{
    return  this->raw_bits;
}

void    Fixed::setRawBits(int const raw)
{
    this->raw_bits = raw;
}

float   Fixed::toFloat(void) const
{
    float   ret;

    ret = raw_bits;
    for (size_t i = 0; i < 8; i++)
        ret /= 2;
    return ret;   
}

int     Fixed::toInt(void) const
{
    return raw_bits >> 8;
}

std::ostream&   operator<<(std::ostream &obj, Fixed const &i)
{
    obj << i.toFloat();
    return obj;
}