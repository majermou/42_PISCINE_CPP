/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:49:22 by majermou          #+#    #+#             */
/*   Updated: 2021/07/02 12:55:05 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{

    public:

        Array<T>(void)
        {
            _arr = NULL;
            _size = 0;
        }
        Array<T>(unsigned int n)
        {
            _arr = new T[n];
            _size = n;
            for (unsigned int  i = 0; i < _size; i++)
                _arr[i] = 0;
        }
        Array<T>(Array<T> const &src)
        {
            *this = src;
        }
        Array<T>&  operator=(Array<T> const &rfs)
        {
            if (this != &rfs)
            {
                _size = rfs.size();
                _arr = new T[_size];
                for (unsigned int i = 0; i < rfs.size(); i++)
                    _arr[i] = rfs[i];
            }
            return *this;
        }
        ~Array<T>(void)
        {
            delete [] _arr;
            _arr = NULL;
        }

        class NOTALLOWEDACCESS: public std::exception
        {
            public:
        
                const char* what(void) const throw()
                {
                    return "\033[0;31mError: you're trying to access not assinged memory!!!\033[0m";
                }
        };

        unsigned int    size(void) const
        {
            return _size;
        }
        T  & operator[](unsigned int idx) const
        {
            if (idx < _size && idx >= 0)
                return _arr[idx];
            else
                throw NOTALLOWEDACCESS();
        }

    private:

        T*              _arr;
        unsigned int    _size;

};


#endif