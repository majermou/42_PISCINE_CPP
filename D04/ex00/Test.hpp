/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 10:49:11 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 11:51:08 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
#define TEST_HPP

#include "Victim.hpp"

class Test: public Victim
{
    public:

        Test(void);
        Test(std::string name);
        Test(Test const &copy);
        Test&   operator=(Test const &rightOperand);
        virtual ~Test(void);

        void            getPolymorphed(void) const;

};

#endif