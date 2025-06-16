/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : FlagTrap.class.cpp                ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/16 11:53:25               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/16 11:53:25               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/FlagTrap.class.h"

FlagTrap::FlagTrap() : ClapTrap("Default")
{
    std::cout << "Default Flag Constructor Called" << std::endl;
    return;
}
FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Scav Constructor Called " << std::endl;
    return;
}

FlagTrap::~FlagTrap()
{
    std::cout << "Destructor Called" << std::endl;
    return;
}

void FlagTrap::attack(const std::string &target)
{
    if (this->energyPoints > 0)
    {
        this->energyPoints--;
        std::cout << "FlagTrap " << this->getName() << " attacks " << target
                  << " causing " << this->attackDamage << " points of damage!" << std::endl;
    }
}
void FlagTrap::highFivesGuys(void)
{
    std::cout << "High Five Request" << std::endl;
}
