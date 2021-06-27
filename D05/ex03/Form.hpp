/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 13:48:47 by majermou          #+#    #+#             */
/*   Updated: 2021/06/27 11:01:56 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <fstream>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:

        Form(void);
        Form(std::string name, int gradTosign, int gradeToexecute, std::string target);
        Form(Form const &src);
        Form&   operator=(Form const &rfs);
        virtual ~Form(void);

        std::string     getTarget(void) const;
        std::string     getName(void) const;
        bool            getFormStatus(void) const;
        int             getGradeTosign(void) const;
        int             getGradeToexecute(void) const;

        virtual void    beSigned(Bureaucrat &bureaucrat);
        virtual void    execute(Bureaucrat const & executor) const;
        virtual void    Action(void) const = 0;

        class GradeTooHighException: public std::exception
        {
            public:
        
                virtual const char* what(void) const throw();
        };

        class GradeTooLowException: public std::exception
        {
            public:
        
                virtual const char* what(void) const throw();
        };

    private:

        std::string         _target;
        std::string const   _name;
        int const           _gradTosign;
        int const           _gradToexecute;
        bool                ISsigned;

};

std::ostream&    operator<<(std::ostream &out, Form &obj);

#endif