/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : AMateria.class.h                  ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/19 07:19:20               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/19 07:19:20               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef A_MATERIA_CLASS_H
#define A_MATERIA_CLASS_H

#include <iostream>
#include "ICharacter.class.h"

class AMateria
{
protected:
    std::string _type;

public:
    AMateria();
    AMateria(std::string const &type);
    virtual ~AMateria();
    AMateria(const AMateria &cpy);
    AMateria const &operator=(const AMateria &cpy);

    std::string const &getType() const; // Returns the materia type

    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target) = 0;
};

#endif