/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Fixed.class.hpp                   ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/05/31 15:42:50               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/05/31 15:42:50               ███████╗███████║██║███████╗╚████╔╝             */
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