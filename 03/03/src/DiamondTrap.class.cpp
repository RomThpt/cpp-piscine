/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : DiamondTrap.class.cpp             ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/16 12:40:48               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/16 12:40:48               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/DiamondTrap.class.h"

DiamondTrap::DiamondTrap() : ScavTrap("Default"), FlagTrap("Default")
{
    this->name = "Default";
    std::cout << "Default Diamond Constructor Called" << std::endl;
    return;
}

DiamondTrap::DiamondTrap(std::string name) : FlagTrap(name), ScavTrap(name)
{
    this->name = name;
    std::cout << "Diamond Constructor Called" << std::endl;
    return;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond Destructor Called" << std::endl;
    return;
}

void DiamondTrap::whoAmI()
{
    std::cout << this->name << " & " << ScavTrap::name << std::endl;
}
