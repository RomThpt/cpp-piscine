/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Cure.class.cpp                    ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/19 07:25:05               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/19 07:25:05               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/Cure.class.h"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure Default Constructor Called" << std::endl;
}

Cure::Cure(std::string const &type) : AMateria(type)
{
    std::cout << "Cure Parametric Constructor Called" << std::endl;
}

Cure::Cure(const Cure &cpy) : AMateria(cpy.getType())
{
    std::cout << "Cure Copy Constructor Called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure Copy Constructor Called" << std::endl;
}

Cure &Cure::operator=(const Cure &cpy)
{
    if (this->getType() != cpy.getType())
    {
        this->_type = cpy.getType();
    }
    return *this;
}

Cure *Cure::clone() const
{
    Cure *cure = new Cure();
    return cure;
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals" << target.getName() << "’s wounds *" << std::endl;
}