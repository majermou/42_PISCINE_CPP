/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crappyPhonebook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 13:09:42 by majermou          #+#    #+#             */
/*   Updated: 2021/05/25 14:56:57 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int main(void)
{
    Contact         phonebook[8];
    std::string     command;
    int             index;
    int             num;
    int             i;

    num = 0;
    while (1)
    {
        std::cout << "Command$ : ";
        std::cin  >> command;
        if (!command.compare("ADD"))
        {
            if (num < 8)
                phonebook[num++].setContact();
            else
                std::cerr << "Error: Phonebook Capacity exceeded!" << std::endl;
        }
        else if (!command.compare("SEARCH"))
        {
            i = 0;
            while (i < num)
            {
                phonebook[i].displayContact(i);
                i++;
            }
            std::cout << std::endl << "Enter the index of the desired entry : ";
            std::cin >> index;
            if (index >= 0 && index <= 7 && std::cin.good())
            {
                if (index >= num)
                    std::cerr << std::endl << "Error: the entry is empty!" << std::endl;
                else
                    phonebook[index].getContact();
            }
            else
            {
                std::cerr << std::endl << "Error: incorect input (index must be between 0-7)!" << std::endl;
                std::cin.clear();
                std::cin.ignore(INT_MAX, '\n');
            }
        }
        else if (!command.compare("EXIT"))
            return (0);
        else
            std::cerr << std::endl << "Error: incorect command (availabele commands are ADD/SEARCH/EXIT)!" << std::endl;
        std::cout << std::endl;
    }
    return (0);
}