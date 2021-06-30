/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:20:34 by majermou          #+#    #+#             */
/*   Updated: 2021/06/29 10:41:12 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>
#include <cstdint>

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main(void)
{
    Data*   ptr = new Data(2021);

    std::cout << "Adress = " << ptr << std::endl;
    std::cout << "Number Value = " << ptr->getNumber() << std::endl;
    
    std::cout << std::endl;

    Data* vlc = deserialize(serialize(ptr));

    std::cout << "Adress = " << vlc << std::endl;
    std::cout << "Number Value = " << vlc->getNumber() << std::endl;
    
    delete ptr;
    return 0;
}