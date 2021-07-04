/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:59:03 by majermou          #+#    #+#             */
/*   Updated: 2021/07/04 14:37:11 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <vector>

int main()
{
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    
    std::cout << "Testing iterators:" << std::endl;
    
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "Testing now with reverse iterators:" << std::endl;

    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }

    std::cout << "Testing now with const iterators:" << std::endl;
    {
        const MutantStack<int> Cstack(mstack);
        MutantStack<int>::const_iterator cit = Cstack.begin();
        MutantStack<int>::const_iterator cite = Cstack.end();
        while (cit != cite)
        {
            std::cout << *cit << std::endl;
            ++cit;
        }
    }


    std::cout << "Let's go crazy!!!!!" << std::endl;
    {
        MutantStack<int, std::vector<int> > Istack;
        srand(time(NULL));
        for (size_t i = 0; i < 1000000; i++)
            Istack.push(rand());
        MutantStack<int, std::vector<int> >::iterator it = Istack.begin();
        MutantStack<int, std::vector<int> >::iterator ite = Istack.end();
        while (it != ite)
        {
            std::cout << *it << std::endl; 
            ++it;
        }
    }
    return 0;
}