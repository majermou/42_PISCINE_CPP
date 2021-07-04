/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:36:00 by majermou          #+#    #+#             */
/*   Updated: 2021/07/02 10:55:02 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class test
{
    private:

        int                     num;

    public:

        test(int number): num(number) {}
        ~test(void) {}
        test&   operator=(test &rfs)
        {
            if (this != &rfs)
                num = rfs.num;
            return *this;
        }
        bool   operator>=(test const &rfs) const
        {
            if ((num >= rfs.num))
                return true;
            else
                return false;
        }
        bool   operator>(test const &rfs) const
        {
            if ((num > rfs.num))
                return true;
            else
                return false;
        }
        int getNum(void) const
        {
            return num;
        }
};

std::ostream&   operator<<(std::ostream &out, test const obj)
{   
    out << obj.getNum();
    return out;
}

int main(void)
{
    int a = 2;
    int b = 3;
    
    ::swap( a, b );
    
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    
    std::string c = "chaine1";
    std::string d = "chaine2";
    
    ::swap(c, d);
    
    std::cout << "c = " << c << ", d = " << d << std::endl;
    
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


    float x = 3.14f;
    float y = 2.71f;
    
    ::swap( x, y );
    
    std::cout << "x = " << x << ", y = " << y << std::endl;
    
    std::cout << "min( x, y ) = " << ::min( x, y ) << std::endl;
    std::cout << "max( x, y ) = " << ::max( x, y ) << std::endl;

    test num0 = 12;
    test num1 = 2;
    
    ::swap( num0, num1 );
    
    std::cout << "num0 = " << num0 << ", num1 = " << num1 << std::endl;
    
    std::cout << "min( num0, y ) = " << ::min( num0, num1 ) << std::endl;
    std::cout << "max( num0, y ) = " << ::max( num0, num1 ) << std::endl;

    return 0;
}