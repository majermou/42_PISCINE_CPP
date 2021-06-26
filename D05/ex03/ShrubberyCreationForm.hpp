/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 17:27:16 by majermou          #+#    #+#             */
/*   Updated: 2021/06/26 19:43:58 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
    public:

        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &src);
        ShrubberyCreationForm&    operator=(ShrubberyCreationForm const &rfs);
        virtual ~ShrubberyCreationForm(void);

        virtual void    Action(void) const;
        
        std::string     getName(void) const;
        bool            getFormStatus(void) const;
        int             getGradeTosign(void) const;
        int             getGradeToexecute(void) const;
        void            setFormStatus(void);

    private:

        std::string const   _target;
        std::string const   _name;
        int const           _gradTosign;
        int const           _gradToexecute;
        bool                ISsigned;

};

std::ostream&    operator<<(std::ostream &out, ShrubberyCreationForm &obj);

#endif