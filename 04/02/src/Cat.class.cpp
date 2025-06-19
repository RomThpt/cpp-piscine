/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Cat.cpp                           ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/16 16:14:20               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/16 16:14:20               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/Cat.class.h"

Cat::Cat(void)
{
    std::cout << "Cat Constructor Called" << std::endl;
    this->brain = new Brain();
    return;
}
Cat::~Cat(void)
{
    std::cout << "Cat Destructor Called" << std::endl;
    delete brain;
    return;
}
void Cat::makeSound(void) const
{
    std::cout << "MEOW MEOW BODYCOUNT" << std::endl;
    return;
}