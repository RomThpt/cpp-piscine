/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Cat.class.h                       ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/16 16:14:44               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/16 16:14:44               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef CAT_CLASS_H
#define CAT_CLASS_H

#include <iostream>
#include "Animal.class.h"

class Cat : public Animal
{
public:
    Cat(void);
    ~Cat(void);
    Cat(const Animal &cpy);
    Cat &operator=(const Animal &cpy);
    virtual void makeSound(void) const;
};

#endif