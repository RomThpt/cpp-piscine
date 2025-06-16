/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : ScavTrap.class.cpp                ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/16 09:35:11               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/16 09:35:11               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/ScavTrap.class.h"

ScavTrap::ScavTrap() : ClapTrap("Default")
{
    std::cout << "Default Scav Constructor Called" << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    std::cout << "Scav Constructor Called" << std::endl;
    return;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scav Destructor Called" << std::endl;
    return;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->energyPoints > 0)
    {
        this->energyPoints--;
        std::cout << "ClapTrap " << this->getName() << " attacks " << target << " causing " << this->attackDamage << " points of damage! " << std::endl;
    }
    return;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->getName() << " is in Gate keeper mode." << std::endl;
}
