/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Fixed.class.hpp                   ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/01 14:48:19               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/01 14:48:19               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */


#include <iostream>
#include <cmath>

#ifndef __FIXED__
#define __FIXED__


class Fixed {

public:

	Fixed( void );
	~Fixed();
	Fixed ( const Fixed& cpy );
    Fixed (int const fixedPointValue);
    Fixed (float const fixedPointValue);
	Fixed& operator= ( const Fixed& cpy );

    bool operator<(const Fixed& other) const;
    bool operator>(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    Fixed operator+(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;

    Fixed& operator++();
    Fixed& operator--();
    Fixed operator++(int);  
    Fixed operator--(int);

    static Fixed& min(Fixed &a, Fixed &b); 
    static Fixed& max(Fixed &a, Fixed &b); 
    static Fixed const &min(Fixed const &a, Fixed const &b);
    static Fixed const &max(Fixed const &a, Fixed const &b); 

    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;

private:
    int _fixedPointValue;
    static const int s_fractionalBits;

};

std::ostream &operator<<(std::ostream& ost, const Fixed &src);


#endif /* __FIXED__ */