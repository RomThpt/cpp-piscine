/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : WrongAnimal.class.cpp             ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/18 14:51:19               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/18 14:51:19               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef WRONG_ANIMAL_CLASS_H
#define WRONG_ANIMAL_CLASS_H

#include <iostream>

class WrongAnimal
{
public:
    WrongAnimal(void);
    virtual ~WrongAnimal(void);
    WrongAnimal(const WrongAnimal &cpy);
    WrongAnimal &operator=(const WrongAnimal &cpy);
    virtual void makeSound(void) const;
    std::string getType() const;
    void setType(std::string);

protected:
    std::string type;
};

#endif