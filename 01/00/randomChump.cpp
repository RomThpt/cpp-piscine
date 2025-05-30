/* ********************************************************************************* */
/*                                                                                   */
/*   File Name  : randomChump.cpp                ███████╗███████╗██╗██╗    ██╗   ██╗ */
/*                                               ██╔════╝██╔════╝██║██║    ██║   ██║ */
/*   Author     : RomThpt <r██@edu.devinci.fr>   █████╗  ███████╗██║██║    ██║   ██║ */
/*   Created    : 2025/05/29 16:46:06            ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ */
/*   Updated    : 2025/05/29 16:46:06            ███████╗███████║██║███████╗╚████╔╝  */
/*                                               ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   */
/*                                                                                   */
/* ********************************************************************************* */
#include <iostream>
#include "Zombie.class.hpp"
#include "newZombie.hpp"

void randomChump(std::string name) {
    Zombie* pZombie = newZombie(name);
    pZombie->announce();
    delete pZombie;  
}