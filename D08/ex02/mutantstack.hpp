/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:59:30 by majermou          #+#    #+#             */
/*   Updated: 2021/07/04 14:38:33 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <class T, class Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
    public:
        
        MutantStack<T, Container>(): std::stack<T, Container>() {}
        MutantStack<T, Container>(MutantStack const & src): std::stack<T, Container>(src) {}
        MutantStack&    operator=(MutantStack const & rfs)
        {
            if (this != &rfs)
                std::stack<T, Container>::operator=(rfs);
            return *this;
        }
       
        typedef typename std::stack<T, Container>::container_type::iterator                 iterator;
        typedef typename std::stack<T, Container>::container_type::const_iterator           const_iterator;
        typedef typename std::stack<T, Container>::container_type::reverse_iterator         reverse_iterator;
        typedef typename std::stack<T, Container>::container_type::const_reverse_iterator   const_reverse_iterator;

        iterator  begin()
        {
            return std::stack<T, Container>::c.begin();
        }
        iterator end()
        {
            return std::stack<T, Container>::c.end();
        }
        const_iterator  begin() const
        {
            return std::stack<T, Container>::c.begin();
        }
        const_iterator end() const
        {
            return std::stack<T, Container>::c.end();
        }
        reverse_iterator  rbegin()
        {
            return std::stack<T, Container>::c.rbegin();
        }
        reverse_iterator  rend()
        {
            return std::stack<T, Container>::c.rend();
        }
        const_reverse_iterator  rbegin() const
        {
            return std::stack<T, Container>::c.rbegin();
        }
        const_reverse_iterator  rend() const
        {
            return std::stack<T, Container>::c.rend();
        }

};

#endif