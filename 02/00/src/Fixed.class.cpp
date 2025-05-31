/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Fixed.class.cpp                   ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/05/31 15:42:54               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/05/31 15:42:54               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */



#include "Fixed.class.hpp"
#include <iostream>

const int Fixed::s_fractionalBits = 8;

Fixed::Fixed( void ){
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPointValue = 0;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed ( const Fixed& cpy): _fixedPointValue(cpy._fixedPointValue)  {
    std::cout << "Destructor called" << std::endl;
}


Fixed& Fixed::operator= ( const Fixed& cpy ){
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &cpy){
        this-> _fixedPointValue = cpy._fixedPointValue;
    }
    return *this;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}


void Fixed::setRawBits( int const raw ){
    this->_fixedPointValue = raw;
}

