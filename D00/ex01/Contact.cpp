/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 13:06:24 by majermou          #+#    #+#             */
/*   Updated: 2021/05/25 12:25:34 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

void    Contact::displayField(std::string field) const
{
    std::cout << std::setw(10);
    if (field.length() > 10)
        std::cout << field.substr(0,9) + '.';
    else
        std::cout << field;
}

void    Contact::displayContact(int index) const
{
    std::cout << std::setw(10);
    std::cout << index;
    std::cout << "|";
    displayField(this->first_name);
    std::cout << "|";
    displayField(this->last_name);
    std::cout << "|";
    displayField(this->nickname);
    std::cout << std::endl;
}

void    Contact::getContact(void) const 
{
    std::cout << "First Name : "        << this->first_name         << std::endl;
    std::cout << "Last Name : "         << this->last_name          << std::endl;
    std::cout << "Nickname : "          << this->nickname           << std::endl;
    std::cout << "Logi n : "             << this->login              << std::endl;
    std::cout << "Postal Address : "    << this->postal_address     << std::endl;
    std::cout << "Email Address : "     << this->email_address      << std::endl;
    std::cout << "Phone Number : "      << this->phone_number       << std::endl;
    std::cout << "Birthday Date : "     << this->birthday_date      << std::endl;
    std::cout << "Favourite meal : "    << this->favorite_meal      << std::endl;
    std::cout << "Underwear Color : "   << this->underwear_color    << std::endl;
    std::cout << "Darkest Secret : "    << this->darkest_secret     << std::endl;
    return;
}

void    Contact::setContact(void)
{
    std::cout << "First Name :";
    std::cin  >> this->first_name;
    std::cout << "Last Name :";
    std::cin  >> this->last_name;
    std::cout << "Nickname :";
    std::cin  >> this->nickname;
    std::cout << "Login :";
    std::cin  >> this->login;
    std::cout << "Postal Address :";
    std::cin  >> this->postal_address;
    std::cout << "Email Address :";
    std::cin  >> this->email_address;
    std::cout << "Phone Number :";
    std::cin  >> this->phone_number;
    std::cout << "Birthday Date :";
    std::cin  >> this->birthday_date;
    std::cout << "Favourite meal :";
    std::cin  >> this->favorite_meal;
    std::cout << "Underwear Color :";
    std::cin  >> this->underwear_color;
    std::cout << "Darkest Secret :";
    std::cin  >> this->darkest_secret;
    return;
}