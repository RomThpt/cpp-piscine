/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : MateriaSource.class.h             ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/19 07:50:42               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/19 07:50:42               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef MATERIASOURCE_CLASS_H
#define MATERIASOURCE_CLASS_H

#include "IMateriaSource.class.h"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *_learned[4];
    int _index;

public:
    MateriaSource();
    MateriaSource(MateriaSource &);
    ~MateriaSource();
    MateriaSource &operator=(MateriaSource &);
    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);
};

#endif