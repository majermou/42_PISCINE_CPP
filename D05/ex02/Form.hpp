/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 13:48:47 by majermou          #+#    #+#             */
/*   Updated: 2021/06/25 17:48:07 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

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
        ~Form(void);

        std::string     getName(void) const;
        bool            getFormStatus(void) const;
        int             getGradeTosign(void) const;
        int             getGradeToexecute(void) const;

        bool            beSigned(Bureaucrat &bureaucrat);

        class GradeTooHighException: public std::exception
        {
            public:
        
                virtual const char* what() const throw();
        };

        class GradeTooLowException: public std::exception
        {
            public:
        
                virtual const char* what() const throw();
        };

        execute(Bureaucrat const & executor) const;
        

    private:

        std::string const   _name;
        int const           _gradTosign;
        int const           _gradToexecute;
        bool                ISsigned;

};

std::ostream&    operator<<(std::ostream &out, Form &obj);

#endif