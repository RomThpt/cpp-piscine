/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : ScavTrap.class.h                  ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/16 09:35:02               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/16 09:35:02               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */
#ifndef SCAVTRAP_CLASS_H
#define SCAVTRAP_CLASS_H

#include "ClapTrap.class.h";

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    void attack(const std::string &target);
    void guardGate();

protected:
    int hitPoints = 100;
    int energyPoints = 50;
    int attackDamage = 20;
};

#endif