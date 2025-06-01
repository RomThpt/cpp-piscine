/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Fixed.class.cpp                   ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/01 14:48:29               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/01 14:48:29               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */



#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

const int Fixed::s_fractionalBits = 8;

Fixed::Fixed( void ){
    this->_fixedPointValue = 0;
}

Fixed::~Fixed(){
}

Fixed::Fixed ( const Fixed& cpy): _fixedPointValue(cpy.getRawBits())  {
}

Fixed::Fixed (int const n) :_fixedPointValue(n<<this->s_fractionalBits) {

}

Fixed::Fixed (float const n) : _fixedPointValue(roundf(n*(1<<s_fractionalBits))){
}


Fixed& Fixed::operator= ( const Fixed& cpy ){
    if(this != &cpy){
        this-> _fixedPointValue = cpy.getRawBits();
    }
    return *this;
}

bool Fixed::operator<(const Fixed& other) const {
    return this->toFloat() < other.toFloat();
}

bool Fixed::operator>(const Fixed& other) const{
    return this->toFloat() > other.toFloat();
}
bool Fixed::operator>=(const Fixed& other) const{
    return this->toFloat() >= other._fixedPointValue;
}
bool Fixed::operator<=(const Fixed& other) const{
    return this->toFloat() <= other.toFloat();
}
bool Fixed::operator==(const Fixed& other) const {
    return this->toFloat() == other.toFloat();
}
bool Fixed::operator!=(const Fixed& other) const {
    return this->toFloat() != other.toFloat();
}

Fixed Fixed::operator+(const Fixed& other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
    return Fixed(this->toFloat() - other.toFloat());
}
Fixed& Fixed::operator++() {
    this->_fixedPointValue++;
    return (*this);
}

Fixed& Fixed::operator--()  {
    this->_fixedPointValue--;
    return (*this);
}

Fixed Fixed::operator++(int)  {
    Fixed tmp = *this;
    _fixedPointValue += 1;
    return tmp;
}
Fixed Fixed::operator--(int)  {
    Fixed tmp = *this;
    _fixedPointValue -= 1;
    return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b ? a : b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b ? a : b);
}
Fixed const &Fixed::min(Fixed const &a, Fixed const &b) {
    return (a < b ? a : b);
}
Fixed const &Fixed::max(Fixed const &a, Fixed const &b) {
    return (a > b ? a : b);
}

std::ostream &operator<<(std::ostream& ost, const Fixed &src){
    ost << src.toFloat();
    return (ost);
}

int Fixed::getRawBits( void ) const {
    return this->_fixedPointValue;
}


void Fixed::setRawBits( int const raw ){
    this->_fixedPointValue = raw;
}


float Fixed::toFloat( void ) const {
    return this->_fixedPointValue>>s_fractionalBits;
}

int Fixed::toInt( void ) const {
    return int(this->_fixedPointValue>>s_fractionalBits);
}

