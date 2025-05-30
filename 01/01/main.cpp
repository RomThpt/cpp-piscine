/* ************************************************************************************* */
/*                                                                                       */
/*    File Name  : main.cpp                          ███████╗███████╗██╗██╗    ██╗   ██╗ */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║ */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║ */
/*    Created    : 2025/05/30 08:02:26               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ */
/*    Updated    : 2025/05/30 08:02:26               ███████╗███████║██║███████╗╚████╔╝  */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   */
/*                                                                                       */
/* ************************************************************************************* */

#include <iostream>
#include "Zombie.class.hpp";

int main(void) {
    int size;
    std::string name;

    std::cout << "Hey, how many are you ?" << std::endl;
    std::cin >> size;

    std::cout << "What are there name"  << std::endl;
    std::cin >> name;

    Zombie* horde = zombieHorde(size, name);

    for(int i=0; i<size; i++)
        horde[i].announce();

    delete [] horde;
    exit(EXIT_SUCCESS);
}