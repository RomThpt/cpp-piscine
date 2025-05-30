/* **************************************************************************** */
/*                                                                              */
/*    File Name  : HumanA.class.hpp                  ███████╗███████╗██╗██╗    ██╗   ██╗ */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║ */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║ */
/*    Created    : 2025/05/30 13:04:49               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ */
/*    Updated    : 2025/05/30 13:04:49               ███████╗███████║██║███████╗╚████╔╝  */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   */
/*                                                                              */
/* **************************************************************************** */

#ifndef HumanA_CLASS_H
#define HumanA_CLASS_H

#include <iostream>
#include "Weapon.class.hpp"


class HumanA {
 private:
    std::string _name;
    Weapon& _weapon;

 public:
      HumanA(const std::string name, Weapon &weapon); 
      void attack(void) const;
      ~HumanA(void);
};



#endif