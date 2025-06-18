/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Animal.cpp                        ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/16 15:42:05               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/16 15:42:05               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/Animal.class.h"

Animal::Animal(void)
{
    std::cout << "Animal Constructor Called" << std::endl;
    return;
}
Animal::~Animal(void)
{
    std::cout << "Animal Destructor Called" << std::endl;
    return;
}
Animal::Animal(const Animal &cpy)
{
    this->type = cpy.getType();
    std::cout
        << "Animal Copy Constructor Called" << std::endl;
    return;
}
Animal &Animal::operator=(const Animal &cpy)
{
    this->type = cpy.type;
    return *this;
}

void Animal::makeSound(void) const {}

std::string Animal::getType() const
{
    return this->type;
}
void Animal::setType(std::string _type)
{
    this->type = _type;
}