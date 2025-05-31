#pragma once
/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Harl.class.hpp                    ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/05/30 18:11:50               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/05/30 18:11:50               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef HARL_CLASS_H
#define HARL_CLASS_H

#include <iostream>


class Harl{

    private:

        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

    public: 
        void complain( std::string level );
};

typedef struct s_level {
    std::string level;
    void (Harl::*f)(void);
} t_level;




#endif