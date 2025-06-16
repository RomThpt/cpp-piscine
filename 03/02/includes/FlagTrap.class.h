/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : FlagTrap.class.h                  ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/16 11:53:14               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/16 11:53:14               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef FLAGTRAP_CLASS_H
#define FLAGTRAP_CLASS_H

#include "ClapTrap.class.h"

class FlagTrap : public ClapTrap
{
public:
    FlagTrap();
    FlagTrap(std::string name);
    ~FlagTrap();
    void attack(const std::string &target);
    void highFivesGuys(void);

private:
    int hitPoints = 100;
    int energyPoints = 100;
    int attackDamage = 30;
};

#endif