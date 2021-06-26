/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:59:03 by majermou          #+#    #+#             */
/*   Updated: 2021/06/26 20:02:39 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern
{
    public:

        Intern(void);
        Intern(Intern const &src);
        Intern& operator=(Intern const &rfs);
        ~Intern(void);

        Form*   makeForm(std::string name, std::string target);
};

#endif