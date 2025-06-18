/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : main.cp                           ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/16 15:35:30               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/16 15:35:30               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "includes/Cat.class.h"
#include "includes/Dog.class.h"
#include "includes/WrongAnimal.class.h"
#include "includes/WrongCat.class.h"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete i;
    delete j;

    return 0;
}