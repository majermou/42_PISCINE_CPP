/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 17:44:26 by majermou          #+#    #+#             */
/*   Updated: 2021/07/04 14:20:15 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    {
        Span sp = Span(100);
        try
        {
            sp.addNumber(5);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            std::cout << "ShortestSpan =  " << sp.shortestSpan() << std::endl;
            std::cout << "LongestSpan =  " << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {
        Span sp = Span(100);
        try
        {
            srand(time(NULL));
            std::vector<int> vect;
            for (int i = 0; i < 10000; i++)
                vect.push_back(rand());
            sp.addNumber(vect.begin(), vect.end());
            std::cout << "ShortestSpan =  " << sp.shortestSpan() << std::endl;
            std::cout << "LongestSpan =  " << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {
        Span sp = Span(2);
        try
        {
            sp.addNumber(-1);
            sp.addNumber(-2);
            sp.addNumber(100);
            sp.addNumber(101);
            sp.addNumber(-100);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {
        Span sp = Span(1);
        try
        {
            sp.addNumber(-1);
            std::cout << "LongestSpan =  " << sp.longestSpan() << std::endl;  
            std::cout << "ShortestSpan =  " << sp.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    
    return 0;
}