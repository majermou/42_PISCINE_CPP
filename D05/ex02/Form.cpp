/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 14:01:14 by majermou          #+#    #+#             */
/*   Updated: 2021/06/27 14:36:53 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeTosign, int gradeToexecute, std::string target):  _target(target), _name(name), 
                                                                                        _gradTosign(gradeTosign),
                                                                                        _gradToexecute(gradeToexecute),
                                                                                        ISsigned(false)
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

std::string     Form::getTarget(void) const
{
    return _target;
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

void            Form::beSigned(Bureaucrat &bureaucrat)
{
    if (!getFormStatus())
    {
        if (bureaucrat.getGrade() <= getGradeTosign())
            ISsigned = true;
        else
            throw Form::GradeTooLowException();
    }
    else
        std::cout << "Form Already Signed!" << std::endl;
}

std::ostream&    operator<<(std::ostream &out, Form &obj)
{
    if (obj.getFormStatus() == true)
        out << "Form ~{" << obj.getName() << "}~ is Signed." << std::endl;
    else
        out << "Form ~{" << obj.getName() << "}~ is not Signed yet." << std::endl;
    return out;
}

const char* Form::GradeTooHighException::what(void) const throw()
{
    return "\033[0;31mGrade is too high!!!\033[0m";
}

const char* Form::GradeTooLowException::what(void) const throw()
{
    return "\033[0;31mGrade is too low!!!\033[0m";
}

void            Form::execute(Bureaucrat const & executor) const
{
    if (_gradToexecute >= executor.getGrade())
        throw std::runtime_error("\033[0;31mForm cannot be executed because The bureaucrat isn't superior enough.\033[0m");
    else if (getFormStatus() == false)
        throw std::runtime_error("\033[0;31mForm cannot be executed because it is not signed.\033[0m");
    else
        Action();
}