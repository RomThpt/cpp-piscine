/* ********************************************************************************* */
/*                                                                                   */
/*   File Name  : Zombie.class.cpp               ███████╗███████╗██╗██╗    ██╗   ██╗ */
/*                                               ██╔════╝██╔════╝██║██║    ██║   ██║ */
/*   Author     : RomThpt <r██@edu.devinci.fr>   █████╗  ███████╗██║██║    ██║   ██║ */
/*   Created    : 2025/05/29 16:46:06            ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ */
/*   Updated    : 2025/05/29 16:46:06            ███████╗███████║██║███████╗╚████╔╝  */
/*                                               ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   */
/*                                                                                   */
/* ********************************************************************************* */
#include <iostream>
#include "Zombie.class.hpp"

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
