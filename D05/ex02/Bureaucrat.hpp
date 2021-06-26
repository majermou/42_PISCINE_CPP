/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:18:28 by majermou          #+#    #+#             */
/*   Updated: 2021/06/26 16:51:06 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    public:

    Bureaucrat(void);
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(Bureaucrat const &src);
    Bureaucrat& operator=(Bureaucrat const &rfs);
    ~Bureaucrat(void);

    int                     getGrade(void) const;
    std::string const       getName(void) const;
    void                    incrementGrade(void);
    void                    decrementGrade(void);

    void                    signForm(Form &form);
    void                    executeForm(Form const & form); 
    

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

        int                 _grade;
        std::string const   _name;

};

std::ostream&    operator<<(std::ostream &out, Bureaucrat const &obj);

#endif