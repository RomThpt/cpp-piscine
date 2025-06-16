/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : DiamondTrap.class.hpp             ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/16 12:40:36               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/16 12:40:36               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef DIAMONDTRAP_CLASS_H
#define DIAMONDTRAP_CLASS_H

#include "FlagTrap.class.h"
#include "ScavTrap.class.h"

class DiamondTrap : virtual public FlagTrap, virtual public ScavTrap
{
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();
    using ScavTrap::attack;
    void whoAmI();

protected:
    std::string name;
    int hitPoints = FlagTrap::hitPoints;
    int energyPoints = ScavTrap::energyPoints;
    int attackDamage = FlagTrap::attackDamage;
};

#endif