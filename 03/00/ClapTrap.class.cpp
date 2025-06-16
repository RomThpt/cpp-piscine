/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : ClapTrap.class.cpp                ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/15 12:54:59               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/15 12:54:59               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "ClapTrap.class.h"

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor Called" << std::endl;
    const std::string name = "Default";
}

ClapTrap::ClapTrap(std::string _name)
{
    std::cout << "Constructor Called" << std::endl;
    const std::string name = _name;
};

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
    std::cout << "Copying" << std::endl;
    const std::string name = cpy.name;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Called" << std::endl;
}

const ClapTrap &ClapTrap::operator=(const ClapTrap &cpy)
{
    std::cout << "Asigning" << std::endl;
    return cpy;
};

void ClapTrap::attack(const std::string &target)
{
    if (this->energyPoints > 0)
    {
        this->energyPoints--;
        std::cout << "ClapTrap " << this->name << "attacks" << target << "causing" << this->attackDamage << "points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hitPoints -= amount;
    std::cout << "ClapTrap " << this->name << "takes" << amount << "points of damage!" << std::endl;
    std::cout << "ClapTrap " << this->name << "has " << this->hitPoints << "HP" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints > 0)
    {
        this->energyPoints--;
        this->hitPoints += amount;
        std::cout << "ClapTrap " << this->name << "repairs" << amount << "of hit point" << std::endl;
    }
}
