/* **************************************************************************** */
/*                                                                              */
/*    File Name  : Weapon.class.cpp                  ███████╗███████╗██╗██╗    ██╗   ██╗ */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║ */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║ */
/*    Created    : 2025/05/30 13:04:19               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ */
/*    Updated    : 2025/05/30 13:04:19               ███████╗███████║██║███████╗╚████╔╝  */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   */
/*                                                                              */
/* **************************************************************************** */

#include <iostream>
#include "../includes/Weapon.class.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::Weapon(void) : _type("") {}

std::string Weapon::getType(void) const {
    return this->_type;
}

void Weapon::setType(std::string type) {
    this->_type = type;
}

Weapon::~Weapon(void) {
    return;
}