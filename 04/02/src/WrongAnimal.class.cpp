/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : WrongAnimal.class.cpp             ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/18 14:51:37               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/18 14:51:37               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/WrongAnimal.class.h"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal Constructor Called" << std::endl;
    return;
}
WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal Destructor Called" << std::endl;
    return;
}
WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
    this->type = cpy.getType();
    std::cout
        << "WrongAnimal Copy Constructor Called" << std::endl;
    return;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cpy)
{
    this->type = cpy.type;
    return *this;
}

void WrongAnimal::makeSound(void) const {}

std::string WrongAnimal::getType() const
{
    return this->type;
}
void WrongAnimal::setType(std::string _type)
{
    this->type = _type;
}