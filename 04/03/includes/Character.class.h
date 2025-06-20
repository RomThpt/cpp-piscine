/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Character.class.h                 ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/19 09:04:55               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/19 09:04:55               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef CHARACTER_CLASS_H
#define CHARACTER_CLASS_H

#include "ICharacter.class.h"

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria *_inventory[4]; 

public:
    Character(std::string const &name);
    Character(const Character &cpy);
    ~Character();
    Character &operator=(const Character &cpy);

    // Implémentation obligatoire de l'interface
    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};

#endif