/* **************************************************************************** */
/*                                                                              */
/*    File Name  : Weapon.class.hpp                  ███████╗███████╗██╗██╗    ██╗   ██╗ */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║ */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║ */
/*    Created    : 2025/05/30 13:04:28               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ */
/*    Updated    : 2025/05/30 13:04:28               ███████╗███████║██║███████╗╚████╔╝  */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   */
/*                                                                              */
/* **************************************************************************** */

#ifndef WEAPON_CLASS_H
#define WEAPON_CLASS_H

#include <iostream>

class Weapon {

    public:
        std::string getType(void) const;
        void setType(std::string type);
        Weapon(std::string type);
        Weapon(void);
        ~Weapon(void);

    private:
        std::string _type;
    
};


#endif