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
    const int arraySize = 10;
    Animal *animals[arraySize];

    // Remplir la première moitié avec des Dog
    for (int i = 0; i < arraySize / 2; i++)
    {
        animals[i] = new Dog();
    }

    // Remplir la seconde moitié avec des Cat
    for (int i = arraySize / 2; i < arraySize; i++)
    {
        animals[i] = new Cat();
    }

    // Test des sons
    for (int i = 0; i < arraySize; i++)
    {
        animals[i]->makeSound();
    }

    // Libération de la mémoire
    for (int i = 0; i < arraySize; i++)
    {
        delete animals[i];
    }

    return 0;
}