/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Cure.class.h                      ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/19 07:24:59               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/19 07:24:59               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef CURE_CLASS_H
#define CURE_CLASS_H

#include "AMateria.class.h"

class Cure : public AMateria
{
public:
    Cure();
    Cure(std::string const &type);
    Cure(const Cure &cpy);
    ~Cure();
    Cure &operator=(const Cure &cpy);

    Cure *clone() const;
    void use(ICharacter &target);
};

#endif