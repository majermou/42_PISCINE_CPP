/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:12:24 by majermou          #+#    #+#             */
/*   Updated: 2021/06/02 18:05:45 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    memoryLeak(void)
{
    std::string*    panther = new std::string("String panther");
    
    std::cout << *panther << std::endl;
    delete panther;
}