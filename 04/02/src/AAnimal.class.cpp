/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : AAnimal.class.cpp                 ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/16 15:42:05               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/16 15:42:05               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/AAnimal.class.h"

AAnimal::AAnimal(void)
{
    std::cout << "Animal Constructor Called" << std::endl;
    return;
}
AAnimal::~AAnimal(void)
{
    std::cout << "Animal Destructor Called" << std::endl;
    return;
}
AAnimal::AAnimal(const AAnimal &cpy)
{
    this->type = cpy.getType();
    std::cout
        << "Animal Copy Constructor Called" << std::endl;
    return;
}
AAnimal &AAnimal::operator=(const AAnimal &cpy)
{
    this->type = cpy.type;
    return *this;
}

void AAnimal::makeSound(void) const {}

std::string AAnimal::getType() const
{
    return this->type;
}
void AAnimal::setType(std::string _type)
{
    this->type = _type;
}