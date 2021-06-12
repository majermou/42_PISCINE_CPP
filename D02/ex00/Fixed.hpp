/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:11:31 by majermou          #+#    #+#             */
/*   Updated: 2021/06/12 16:40:24 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed(void);
        Fixed(Fixed const &src);
        ~Fixed(void);
        
        Fixed   &operator=(Fixed const &rfs);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);

    private:

        int                 raw_bits;
        static int const    nbr_fractionalbits = 8;
};

#endif