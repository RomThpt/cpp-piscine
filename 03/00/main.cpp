/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : main.cpp                          ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/16 07:56:41               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/16 07:56:41               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "includes/ClapTrap.class.h"

int main()
{
    ClapTrap cain("Cain");
    ClapTrap abel("Abel");
    std::cout << "--" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        cain.attack("Abel");
    }
    std::cout << "God deals 5 damage to Abel" << std::endl;
    abel.takeDamage(5);
    abel.beRepaired(5);
    for (int i = 0; i < 10; i++)
    {
        cain.attack("Abel");
    }
    std::cout << "God deals 10 damage to Abel" << std::endl;
    abel.takeDamage(10);
    abel.attack("Cain");
    abel.beRepaired(10);
    std::cout << "--" << std::endl;
    return (0);
}
