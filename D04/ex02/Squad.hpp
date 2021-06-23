/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 11:14:48 by majermou          #+#    #+#             */
/*   Updated: 2021/06/23 18:20:46 by majermou         ###   ########.fr       */
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
        Squad(Squad  &copy);
        Squad& operator=(Squad &leftOperand);
        virtual ~Squad(void);

        virtual int             getCount(void) const;
        virtual ISpaceMarine*   getUnit(int Idx) const;
        virtual int             push(ISpaceMarine* obj);

        

    private:

        void            clean(void);
        ISpaceMarine    **Units;
        int             numUnits;

};

#endif