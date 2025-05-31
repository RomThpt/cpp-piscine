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


#ifndef __FIXED__
#define __FIXED__


class Fixed {

public:

	Fixed( void );
	~Fixed();
	Fixed ( const Fixed& cpy );
	Fixed& operator= ( const Fixed& cpy );
    int getRawBits( void ) const;
    void setRawBits( int const raw );

private:
    int _fixedPointValue;
    static const int s_fractionalBits;

};

#endif /* __FIXED__ */