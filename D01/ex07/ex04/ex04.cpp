/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:36:06 by majermou          #+#    #+#             */
/*   Updated: 2021/06/07 15:44:19 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string     str = "HI THIS IS BRAIN";
    std::string     *str_ptr = &str;
    std::string     &str_ref = str;

    std::cout << "Dereferncing using a Pointer :" << std::endl;
    std::cout << *str_ptr << std::endl;

    std::cout << "Dereferncing using a Refrence :" << std::endl;
    std::cout << str_ref << std::endl;

    return (0);
}