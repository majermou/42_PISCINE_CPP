/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:56:34 by majermou          #+#    #+#             */
/*   Updated: 2021/07/04 14:14:00 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N): _size(N), idx(0)
{
}

Span::Span(Span const &src)
{
    *this = src;
}

Span&   Span::operator=(Span const &rfs)
{
    if (this != &rfs)
    {
        arr = rfs.arr;
        _size = rfs._size;
        idx = rfs.idx;
    }
    return *this;
}

Span::~Span(void)
{
}

void    Span::addNumber(int num)
{
    if (idx < _size)
    {
        arr.push_back(num);
        idx += 1;
    }
    else
        throw std::runtime_error("\033[0;31mError: Array is full!!!\033[0m");
}

unsigned int    Span::shortestSpan(void)
{
    std::vector<int>    arr0(arr);
    int                 shSpan;
    
    if (idx >= 2)
    {
        sort(arr0.begin(), arr0.end());
        std::vector<int>::iterator it = arr0.begin();
        shSpan = *(it + 1) - *it;
        it++;
        while ((it + 1) != arr0.end())
        {
            if (shSpan > *(it + 1) - *it)
                shSpan = *(it + 1) - *it;
            it++;
        }
        return shSpan;
    }
    else
        throw std::runtime_error("\033[0;31mError: ShortSpan can't be defined!!!\033[0m");
}

unsigned int    Span::longestSpan(void)
{
    std::vector<int>    arr0(arr);
    
    if (idx >= 2)
    {
        sort(arr0.begin(), arr0.end());
        return  *(arr0.end() - 1) - *arr0.begin();
    }
    else
        throw std::runtime_error("\033[0;31mError: LongestSpan can't be defined!!!\033[0m");
}
