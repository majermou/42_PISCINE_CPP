/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:02:07 by majermou          #+#    #+#             */
/*   Updated: 2021/06/30 11:22:50 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main(void)
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    ICharacter* him = new Character("him");

    him = me;

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);


    me->use(0, *him);
    
    Character* bob = new Character("bob");
    Character* alex = new Character(*bob);

    me->use(1, *alex);
    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;
    delete alex;

    return 0;
}