/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:11:31 by majermou          #+#    #+#             */
/*   Updated: 2021/06/19 13:50:07 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
# include <cmath>

class Fixed
{
    public:
        Fixed(void);
        Fixed(int const num);
        Fixed(float const real_num);
        Fixed(Fixed const &src);
        ~Fixed(void);

        Fixed   &operator=(Fixed const &rfs);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;

    private:

        int                 raw_bits;
        static int const    nbr_fractionalbits = 8;
};

std::ostream&   operator<<(std::ostream &obj, Fixed const &i);

#endif