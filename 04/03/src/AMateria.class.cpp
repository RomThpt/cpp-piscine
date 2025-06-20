/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : AMateria.class.cpp                ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/19 07:19:27               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/19 07:19:27               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/AMateria.class.h"

AMateria::AMateria() : _type("Default")
{
    std::cout << "AMateria Default Constructor Called" << std::endl;
}
AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "AMateria Constructor Called" << std::endl;
}
AMateria::~AMateria()
{
    std::cout << "AMateria Destructor Called" << std::endl;
}
AMateria::AMateria(const AMateria &cpy) : _type(cpy.getType())
{
    std::cout << "AMateria Copy Constructor Called" << std::endl;
}

AMateria const &AMateria::operator=(const AMateria &cpy)
{
    if (this != &cpy)
        _type = cpy._type;
    return *this;
}

std::string const &AMateria::getType() const
{
    return this->_type;
}