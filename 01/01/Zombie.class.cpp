/* ************************************************************************************* */
/*                                                                                       */
/*    File Name  : Zombie.class.cpp                  ███████╗███████╗██╗██╗    ██╗   ██╗ */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║ */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║ */
/*    Created    : 2025/05/30 08:04:33               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ */
/*    Updated    : 2025/05/30 08:04:33               ███████╗███████║██║███████╗╚████╔╝  */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   */
/*                                                                                       */
/* ************************************************************************************* */

#include <iostream>
#include "Zombie.class.hpp"

Zombie::Zombie(void) : _name("Foo") {}

Zombie::Zombie(const std::string &name) : _name(name) {
    std::cout << this->getName() << " was created." << std::endl;
    return;
};

Zombie::~Zombie(void){
    std::cout << this->getName() << " was destroyed." << std::endl;
    return ;
};

void Zombie::announce(void) const{
    std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(void) const {
    return this->_name;
}

std::string Zombie::setName(std::string name) {
    this->_name = name;
    return this->_name;
}