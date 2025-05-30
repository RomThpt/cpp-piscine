/* **************************************************************************** */
/*                                                                              */
/*    File Name  : HumanB.class.hpp                  ███████╗███████╗██╗██╗    ██╗   ██╗ */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║ */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║ */
/*    Created    : 2025/05/30 13:05:03               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ */
/*    Updated    : 2025/05/30 13:05:03               ███████╗███████║██║███████╗╚████╔╝  */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   */
/*                                                                              */
/* **************************************************************************** */

#ifndef HumanB_CLASS_H
#define HumanB_CLASS_H

#include <iostream>
#include "Weapon.class.hpp"


class HumanB {
 private:
    std::string _name;
    Weapon *_weapon;

 public:
      HumanB(const std::string name); 
      void setWeapon(Weapon &weapon); 
      void attack(void) const;
      ~HumanB(void);
};



#endif