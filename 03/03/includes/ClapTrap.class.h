#pragma once
/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : ClapTrap.class.h                  ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/15 12:54:55               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/15 12:54:55               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef CLAPTRAP_CLASS_H
#define CLAPTRAP_CLASS_H

#include <iostream>

class ClapTrap
{
protected:
    const std::string name;
    int hitPoints = 10;
    int energyPoints = 10;
    int attackDamage = 0;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &cpy);
    ~ClapTrap();
    const ClapTrap &operator=(const ClapTrap &cpy);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string const getName();
};

#endif