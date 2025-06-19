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
#include "AAnimal.class.h"
#include "Brain.class.h"

class Cat : public AAnimal
{
public:
    Cat(void);
    ~Cat(void);
    Cat(const Cat &cpy);
    Cat &operator=(const Cat &cpy);
    void makeSound(void) const;

private:
    Brain *brain;
};

#endif