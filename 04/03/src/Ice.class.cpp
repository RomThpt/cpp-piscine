/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Ice.class.cpp                     ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/19 07:25:10               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/19 07:25:10               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/Ice.class.h"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice Default Constructor Called" << std::endl;
}

Ice::Ice(std::string const &type) : AMateria(type)
{
    std::cout << "Ice Parametric Constructor Called" << std::endl;
}

Ice::Ice(const Ice &cpy) : AMateria(cpy.getType())
{
    std::cout << "Ice Copy Constructor Called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice Copy Constructor Called" << std::endl;
}

Ice &Ice::operator=(const Ice &cpy)
{
    if (this->getType() != cpy.getType())
    {
        this->_type = cpy.getType();
    }
    return *this;
}

Ice *Ice::clone() const
{
    Ice *ice = new Ice();
    return ice;
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
