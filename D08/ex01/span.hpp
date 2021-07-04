/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:52:37 by majermou          #+#    #+#             */
/*   Updated: 2021/07/04 14:19:31 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
    public:

        Span(unsigned int N);
        Span(Span const &src);
        Span&   operator=(Span const &rfs);
        ~Span(void);

        void            addNumber(int num);
        unsigned int    shortestSpan(void);
        unsigned int    longestSpan(void);
        
        template <typename IT>
        void            addNumber(IT begin, IT end)
        {
            std::ptrdiff_t diff = end - begin;
            if (diff < 0)
                throw std::runtime_error("\033[0;31mError: Wrong parameters!!!\033[0m");
            else
            {
                arr.insert(arr.end(), begin, end);
                idx += diff;
            }
        }

    private:

        std::vector<int>        arr;
        unsigned int            _size;
        unsigned int            idx;

};

#endif