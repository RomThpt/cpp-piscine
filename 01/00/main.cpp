/* ********************************************************************************* */
/*                                                                                   */
/*   File Name  : main.cpp                       ███████╗███████╗██╗██╗    ██╗   ██╗ */
/*                                               ██╔════╝██╔════╝██║██║    ██║   ██║ */
/*   Author     : RomThpt <r██@edu.devinci.fr>   █████╗  ███████╗██║██║    ██║   ██║ */
/*   Created    : 2025/05/29 16:46:06            ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ */
/*   Updated    : 2025/05/29 16:46:06            ███████╗███████║██║███████╗╚████╔╝  */
/*                                               ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   */
/*                                                                                   */
/* ********************************************************************************* */
#include "Zombie.class.hpp"
#include <iostream>

int main(int argc, char **argv) {
    std::cout << "\n=== Testing Zombie Class ===\n" << std::endl;
    
    // Test 1: Create a zombie and test setName/getName
    std::cout << "Test 1: Basic zombie creation and name methods" << std::endl;
    Zombie zombie1 = Zombie("Walker");
    std::cout << "Zombie name: " << zombie1.getName() << std::endl;
    zombie1.announce();
    std::cout << std::endl;

    // Test 2: Test newZombie function
    std::cout << "Test 2: Testing newZombie function" << std::endl;
    Zombie* zombie2 = newZombie("Runner");
    std::cout << "Created zombie name: " << zombie2->getName() << std::endl;
    zombie2->announce();
    std::cout << std::endl;

    // Test 3: Test randomChump function
    std::cout << "Test 3: Testing randomChump function" << std::endl;
    randomChump("Crawler");
    std::cout << std::endl;

    // Test 4: Test multiple zombies
    std::cout << "Test 4: Testing multiple zombies" << std::endl;
    Zombie zombie3 = Zombie("Shambler");
    zombie3.announce();
    
    Zombie zombie4 = Zombie("Lurker");
    zombie4.announce();
    std::cout << std::endl;

    std::cout << "=== All tests completed ===\n" << std::endl;
    return 0;
}