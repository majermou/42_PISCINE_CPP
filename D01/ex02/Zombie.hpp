/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:43:30 by majermou          #+#    #+#             */
/*   Updated: 2021/06/07 12:56:43 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:

    Zombie(std::string name, std::string type);
    ~Zombie(void);
    void    announce(void) const;

    private:

        std::string     z_name;
        std::string     z_type;

};

#endif