/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 13:48:47 by majermou          #+#    #+#             */
/*   Updated: 2021/06/26 19:41:33 by majermou         ###   ########.fr       */
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
        Form(std::string name, int gradTosign, int gradeToexecute);
        Form(Form const &src);
        Form&   operator=(Form const &rfs);
        virtual ~Form(void);

        virtual std::string     getName(void) const;
        virtual bool            getFormStatus(void) const;
        virtual int             getGradeTosign(void) const;
        virtual int             getGradeToexecute(void) const;

        void            beSigned(Bureaucrat &bureaucrat);
        void            execute(Bureaucrat const & executor) const;
        virtual void    Action(void) const = 0;
        virtual void    setFormStatus(void) = 0;

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

        std::string const   _name;
        int const           _gradTosign;
        int const           _gradToexecute;
        bool                ISsigned;

};

std::ostream&    operator<<(std::ostream &out, Form &obj);

#endif