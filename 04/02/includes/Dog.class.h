/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Dog.h                             ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/16 16:13:53               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/16 16:13:53               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef DOG_CLASS_H
#define DOG_CLASS_H

#include <iostream>
#include "AAnimal.class.h"
#include "Brain.class.h"

class Dog : public AAnimal
{
public:
    Dog(void);
    ~Dog(void);
    Dog(const Dog &cpy);
    Dog &operator=(const Dog &cpy);
    void makeSound(void) const;

private:
    Brain *brain;
};

#endif