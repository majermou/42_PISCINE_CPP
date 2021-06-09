/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:45:41 by majermou          #+#    #+#             */
/*   Updated: 2021/06/02 16:02:30 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string pony_name) : name(pony_name)
{
    std::cout << "Hi my name is " << pony_name << std::endl;
}

Pony::~Pony(void)
{
    std::cout << this->name << " is destroyed" << std::endl;
}