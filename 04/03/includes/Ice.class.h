/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Ice.class.h                       ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/19 07:24:51               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/19 07:24:51               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef ICE_CLASS_H
#define ICE_CLASS_H

#include "AMateria.class.h"

class Ice : public AMateria
{
public:
    Ice();
    Ice(std::string const &type);
    Ice(const Ice &cpy);
    ~Ice();
    Ice &operator=(const Ice &cpy);

    Ice *clone() const;
    void use(ICharacter &target);
};

#endif