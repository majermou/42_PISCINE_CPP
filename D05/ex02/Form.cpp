/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 14:01:14 by majermou          #+#    #+#             */
/*   Updated: 2021/06/25 15:24:08 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _name("Form"), _gradTosign(5), _gradToexecute(100), ISsigned(false)
{
}

Form::Form(std::string name, int gradeTosign, int gradeToexecute):   _name(name), _gradTosign(gradeTosign),
                                                                    _gradToexecute(gradeToexecute), ISsigned(false)
{
    if (gradeToexecute < 1 || gradeTosign < 1)
        throw Form::GradeTooHighException();
    else if (gradeToexecute > 150 || gradeTosign > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &src): _gradTosign(src.getGradeTosign()), _gradToexecute(src.getGradeToexecute())
{
    *this = src;
}

Form&   Form::operator=(Form const &rfs)
{
    if (this != &rfs)
    {
        ISsigned = rfs.getFormStatus();
    }
    return *this;
}

Form::~Form(void)
{
}

std::string     Form::getName(void) const
{
    return _name;
}

bool            Form::getFormStatus(void) const
{
    return ISsigned;
}

int             Form::getGradeTosign(void) const
{
    return _gradTosign;
}

int             Form::getGradeToexecute(void) const
{
    return _gradToexecute;
}

bool            Form::beSigned(Bureaucrat &bureaucrat)
{
    if (this->getFormStatus() == false)
    {
        if (bureaucrat.getGrade() <= _gradTosign)
        {
            ISsigned = true;
            return true;
        }
        else
            throw Form::GradeTooLowException();
    }
    else
        std::cout << "Form Already Signed!" << std::endl;
    return false;
}

std::ostream&    operator<<(std::ostream &out, Form &obj)
{
    if (obj.getFormStatus() == true)
        out << "This Form is Signed."<< std::endl;
    else
        out << "This Form isn't Signed yet."<< std::endl;
    return out;
}

const char* Form::GradeTooHighException::what(void) const throw()
{
    return "Grade is too high!!!";
}

const char* Form::GradeTooLowException::what(void) const throw()
{
    return "Grade is too low!!!";
}