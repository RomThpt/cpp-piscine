/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : MateriaSource.class.cpp           ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/19 07:50:50               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/19 07:50:50               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/MateriaSource.class.h"
#include "../includes/AMateria.class.h"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->_learned[i] = NULL;
    this->_index = 0;
    std::cout << "MateriaSource Default Constructor Called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource &cpy)
{
    if (this != &cpy)
    {
        this->_index = cpy._index;
        for (int i = 0; i < 4; i++)
            this->_learned[i] = cpy._learned[i] ? cpy._learned[i]->clone() : NULL;
    }
    std::cout << "MateriaSource Constructor Called" << std::endl;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete this->_learned[i];
    _index = 0;
    std::cout << "MateriaSource Destructor Called" << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource &cpy)
{
    if (this != &cpy)
    {
        for (int i = 0; i < 4; i++)
        {
            delete this->_learned[i];
            this->_learned[i] = cpy._learned[i] ? cpy._learned[i]->clone() : NULL;
        }
        this->_index = cpy._index;
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
    if (!materia)
        return;
    if (_index < 4)
    {
        _learned[_index] = materia->clone();
        _index++;
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < this->_index; i++)
    {
        if (_learned[i] && _learned[i]->getType() == type)
        {
            return _learned[i]->clone();
        }
    }
    return NULL;
}