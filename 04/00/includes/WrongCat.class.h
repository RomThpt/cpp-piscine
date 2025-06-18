/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : WrongCat.class.cpp                ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/18 14:51:09               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/18 14:51:09               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef WRONG_CAT_CLASS_H
#define WRONG_CAT_CLASS_H

#include <iostream>
#include "WrongAnimal.class.h"

class WrongCat : public WrongAnimal
{
public:
    WrongCat(void);
    virtual ~WrongCat(void);
    WrongCat(const WrongAnimal &cpy);
    WrongCat &operator=(const WrongAnimal &cpy);
    virtual void makeSound(void) const;
};

#endif