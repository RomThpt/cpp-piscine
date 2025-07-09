/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Character.class.cpp               ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/19 09:05:04               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/19 09:05:04               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/Character.class.h"
#include "../includes/AMateria.class.h"

Character::Character(std::string const &name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    std::cout << "Character Constructor Called" << std::endl;
}

Character::Character(const Character &cpy) : _name(cpy._name)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = cpy._inventory[i] ? cpy._inventory[i]->clone() : NULL;
    std::cout << "Character Copy Constructor Called" << std::endl;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete _inventory[i];
    std::cout << "Character Destructor Called" << std::endl;
}

Character &Character::operator=(const Character &cpy)
{
    if (this != &cpy)
    {
        _name = cpy._name;
        for (int i = 0; i < 4; i++)
        {
            delete _inventory[i];
            _inventory[i] = cpy._inventory[i] ? cpy._inventory[i]->clone() : NULL;
        }
    }
    return *this;
}

std::string const &Character::getName() const
{
    return _name;
}

void Character::equip(AMateria *m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!_inventory[i]) // IF NULL
        {
            _inventory[i] = m;
            std::cout << m->getType() << " equiped" << std::endl;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && _inventory[idx])
    {
        std::cout << _inventory[idx]->getType() << " unequiped" << std::endl;
        _inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && _inventory[idx])
    {
        std::cout << getName() << " using " << _inventory[idx]->getType() << " on " << target.getName() << std::endl;
        _inventory[idx]->use(target);
    }
}