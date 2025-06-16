/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Animal.h                          ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/16 15:40:58               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/16 15:40:58               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef ANIMAL_CLASS_H
#define ANIMAL_CLASS_H

#include <iostream>

class Animal
{
public:
    Animal(void);
    ~Animal(void);
    Animal(const Animal &cpy);
    Animal &operator=(const Animal &cpy);
    virtual void makeSound(void) const;
    std::string getType() const;
    void setType(std::string);

protected:
    std::string type;
};

#endif