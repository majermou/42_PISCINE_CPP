/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 17:27:18 by majermou          #+#    #+#             */
/*   Updated: 2021/06/25 18:03:53 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{

    public:
    
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &src);
        RobotomyRequestForm&    operator=(RobotomyRequestForm const &rfs);
        ~RobotomyRequestForm(void);

    private:

        std::string const   _name;
        int const           _gradTosign;
        int const           _gradToexecute;
        bool                ISsigned;


};

#endif