/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Point.class.hpp                   ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/01 16:02:15               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/01 16:02:15               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */
#include <iostream>
#include <cmath>

#ifndef __POINT__
#define __POINT__
#include "Fixed.class.hpp"

class Point {
    public:
        Point();
        Point(float const a, float const b);
        Point(const Point& cpy );
        Point& operator= ( const Point& cpy );
        ~Point();

    private:
        Fixed x;
        Fixed y;
};

#endif