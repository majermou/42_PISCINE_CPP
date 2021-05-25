/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:26:13 by majermou          #+#    #+#             */
/*   Updated: 2021/05/25 16:48:10 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    static int  index;
    
    this->_amount = initial_deposit;
    this->_accountIndex = index;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    _nbAccounts += 1;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout   << "index:" << this->_accountIndex << ";amount:"
                << this->_amount << ";created" << std::endl;
    index++;
    return ;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout   << "index:" << this->_accountIndex << ";amount:"
                << this->_amount << ";closed" << std::endl;
    return ;
}

int Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void    Account::_displayTimestamp( void )
{
    time_t          timer;
    struct tm       *timeptr;
    char            buffer[100];

    time(&timer);
    timeptr = localtime(&timer);
    std::strftime(buffer, 100, "[%Y%m%d_%H%M%S] ", timeptr);
    std::cout   << buffer;
    return ;
}

void    Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout   << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" 
                << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
    return ;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout   << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:"
                << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
    return ;
}

void    Account::makeDeposit( int deposit )
{
    int p_amount = this->_amount;

    this->_amount += deposit;
    this->_nbDeposits += 1;
    _totalNbDeposits += 1;
    _totalAmount += deposit;
    _displayTimestamp();
    std::cout   << "index:"<< this->_accountIndex << ";p_amount:" << p_amount
                << ";deposit:" << deposit << ";amount:" << this->_amount
                << ";nb_deposits:" << this->_nbDeposits << std::endl;
    return ;
}

int Account::checkAmount( void ) const
{
    static int fun_call;

    fun_call++; 
    return (this->_amount);
}
   
bool    Account::makeWithdrawal( int withdrawal )
{
    int p_amount = this->_amount;

    _displayTimestamp();
    std::cout   << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:";
    if (withdrawal <= checkAmount())
    {
        this->_amount -= withdrawal;
        this->_nbWithdrawals += 1;
        _totalNbWithdrawals += 1;
        _totalAmount -= withdrawal;
        std::cout   << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:"
                    << this->_nbWithdrawals << std::endl;
        return (true);
    }
    else
    {
        std::cout   << "refused" << std::endl;
        return (false);
    }
}
