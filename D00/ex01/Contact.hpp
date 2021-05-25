/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 13:06:39 by majermou          #+#    #+#             */
/*   Updated: 2021/05/25 11:03:31 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iomanip>
#include <iostream>

class	Contact {

public:

	Contact(void);
	~Contact(void);
	
	void	setContact(void);
	void	getContact(void) const;
	void	displayField(std::string field) const;
	void	displayContact(int index) const;
	
private:

	std::string		first_name;
	std::string     last_name;
	std::string     nickname;
	std::string     login;
	std::string     postal_address;
	std::string     email_address;
	std::string     phone_number;
	std::string		birthday_date;
	std::string		favorite_meal;
	std::string		underwear_color;
	std::string		darkest_secret;

};

#endif
