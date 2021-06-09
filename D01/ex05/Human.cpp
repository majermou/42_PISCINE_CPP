/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:09:17 by majermou          #+#    #+#             */
/*   Updated: 2021/06/09 10:56:43 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain const     &Human::getBrain(void) const
{
    return (this->brain);
}

void    *Human::identify(void) const
{
    return (this->brain.identify());
}
