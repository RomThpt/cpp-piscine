/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Dog.class.cpp                     ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/16 16:14:13               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/16 16:14:13               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */
#include "../includes/Animal.class.h"
#include "../includes/Dog.class.h"

Dog::Dog(void)
{
    std::cout << "Dog Constructor Called" << std::endl;
    this->brain = new Brain();
    return;
}
Dog::~Dog(void)
{
    std::cout << "Dog Destructor Called" << std::endl;
    delete brain;
    return;
}
Dog::Dog(const Dog &cpy)
{
    this->type = cpy.getType();
    std::cout << "Dog Copy Constructor Called" << std::endl;
    return;
}

void Dog::makeSound(void) const
{
    std::cout << "WOAUF WAOUD BODYCOUNT" << std::endl;
    return;
}
