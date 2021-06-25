/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:16:17 by majermou          #+#    #+#             */
/*   Updated: 2021/06/25 12:48:47 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _grade(10), _name("the Bureaucrat")
{
}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade = grade;
          
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
    *this = src;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rfs)
{
    if (this != &rfs)
    {
        _grade = rfs.getGrade();
    }
    return *this;
}

Bureaucrat::~Bureaucrat(void)
{
}

std::string const   Bureaucrat::getName(void) const
{
    return _name;
}

int     Bureaucrat::getGrade(void) const
{
    return _grade;
}

void    Bureaucrat::incrementGrade(void)
{
    if (_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade -= 1; 
}

void    Bureaucrat::decrementGrade(void)
{
    if (_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade += 1;
}

std::ostream&    operator<<(std::ostream &out, Bureaucrat const &obj)
{
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return out;
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return "Grade is too high!!!";
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return "Grade is too low!!!";
}