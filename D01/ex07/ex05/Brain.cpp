/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:49:03 by majermou          #+#    #+#             */
/*   Updated: 2021/06/08 19:07:57 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

void    *Brain::identify(void) const
{
    return ((void *)this);
}

Brain::Brain(void): iq(160), nbr_neurons(100000000000), age(21)
{
    std::cout << "This brain has an Iq of : " << this->iq << " and approximately " << this->nbr_neurons
              << " neurons & is " << this->age << " years old" << std::endl;
}
