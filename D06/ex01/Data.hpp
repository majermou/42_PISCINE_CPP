/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:14:23 by majermou          #+#    #+#             */
/*   Updated: 2021/06/29 10:41:59 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

class Data
{
    public:

        Data(void);
        Data(int num);
        Data(Data const &src);
        Data&   operator=(Data const &rfs);
        ~Data(void);

        int     getNumber(void) const;
    
    private:

        int     number;
};

#endif