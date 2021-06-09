/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:52:30 by majermou          #+#    #+#             */
/*   Updated: 2021/06/02 18:35:56 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheHeap(void)
{
    Pony    *ptr = new Pony("lisa");
    
    std::cout << "A pony object called lisa was created on the heap" << std::endl;
    delete ptr;
}

void    ponyOnTheStack(void)
{
    Pony    pony("marian");
    
    std::cout << "A pony object called marian was created on the stack" << std::endl;
}

int main(void)
{
    ponyOnTheHeap();
    ponyOnTheStack();

    return (0);
}