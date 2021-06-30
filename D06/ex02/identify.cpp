/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:51:32 by majermou          #+#    #+#             */
/*   Updated: 2021/06/29 12:28:07 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>

Base*   generate(void)
{
    int     random = rand() % 3;
    Base*   ptr = NULL;

    if (random == 0)
    {
        std::cout << "Class A was instanciated." << std::endl;
        ptr = new A();
    }
    else if (random == 1)
    {
        std::cout << "Class B was instanciated." << std::endl;
        ptr = new B();
    }
    else if (random == 2)
    {
        std::cout << "Class C was instanciated." << std::endl;
        ptr = new C();
    }
    return ptr; 
}

void    identify(Base* p)
{
    try
    {
        A*  a1 = dynamic_cast<A*>(p);
        B*  b2 = dynamic_cast<B*>(p);
        C*  c3 = dynamic_cast<C*>(p);

        if (a1)
            std::cout << "A" << std::endl;
        else if (b2)
            std::cout << "B" << std::endl;
        else if (c3)
            std::cout << "C" << std::endl;
    }
    catch(std::bad_cast &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void identify(Base& p)
{
    try
    {
	    A&  a1 = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a1;
    }
    catch (std::bad_cast &bc)
    {
    }
    
    try
    {
	    B&  b2 = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)b2;
    }
    catch (std::bad_cast &bc)
    {
    }
    
    try
    {
	    C&  c3 = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void)c3;
    }
    catch (std::bad_cast &bc)
    {
    }
}

int main(void)
{
    srand(time(NULL));

    Base*   base = generate();
    identify(base);
    identify(*base);

    delete base;
}