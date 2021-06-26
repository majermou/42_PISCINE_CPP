/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 17:27:20 by majermou          #+#    #+#             */
/*   Updated: 2021/06/26 19:42:11 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{

    public:

        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &src);
        PresidentialPardonForm&    operator=(PresidentialPardonForm const &rfs);
        virtual ~PresidentialPardonForm(void);

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

std::ostream&    operator<<(std::ostream &out, PresidentialPardonForm &obj);

#endif