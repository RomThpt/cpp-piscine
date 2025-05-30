/* ************************************************************************************* */
/*                                                                                       */
/*    File Name  : Account.cpp                       ███████╗███████╗██╗██╗    ██╗   ██╗ */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║ */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║ */
/*    Created    : 2025/05/30 07:41:56               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ */
/*    Updated    : 2025/05/30 07:41:56               ███████╗███████║██║███████╗╚████╔╝  */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   */
/*                                                                                       */
/* ************************************************************************************* */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
    _nbAccounts++;
}

Account::~Account()
{
    _nbAccounts--;
    _totalAmount -= _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts()
{
    return _nbAccounts;
}   

int Account::getTotalAmount()
{
    return _totalAmount;
}
int Account::getNbDeposits()
{
    return _totalNbDeposits;
}
int Account::getNbWithdrawals()
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit){
    _nbDeposits++;
    _amount+=deposit;
    _totalAmount+=deposit;

}

bool Account::makeWithdrawal(int withdrawal){
    _nbWithdrawals++;
    _amount-=withdrawal;
    _totalAmount-=withdrawal;
    return true;
}

void Account::displayStatus() const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex  << ";p_amount:" << 42 << ";deposit:" << _nbDeposits << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}



void Account::_displayTimestamp(){
    std::cout << "[" << std::time(nullptr) << "]";
}