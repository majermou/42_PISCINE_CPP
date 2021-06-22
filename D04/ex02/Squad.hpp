/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 11:14:48 by majermou          #+#    #+#             */
/*   Updated: 2021/06/22 12:09:16 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad: public ISquad
{

    public:

        Squad(void);
        Squad(Squad const &copy);
        Squad& operator=(Squad const &leftOperand);
        ~Squad(void);

        ISpaceMarine            **getUnits(void) const;
        virtual int             getCount(void) const;
        virtual ISpaceMarine*   getUnit(int N) const;
        virtual int             push(ISpaceMarine* obj);

    private:

        int             numUnits;
        ISpaceMarine    **Units;

};

#endif