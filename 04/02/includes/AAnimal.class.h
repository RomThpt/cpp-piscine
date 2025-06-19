/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : AAnimal.class.h                   ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/16 15:40:58               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/16 15:40:58               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef AANIMAL_CLASS_H
#define AANIMAL_CLASS_H

#include <iostream>

class AAnimal
{
public:
    AAnimal(void);
    virtual ~AAnimal(void);
    AAnimal(const AAnimal &cpy);
    AAnimal &operator=(const AAnimal &cpy);
    virtual void makeSound(void) const = 0;
    std::string getType() const;
    void setType(std::string);

protected:
    std::string type;
};

#endif