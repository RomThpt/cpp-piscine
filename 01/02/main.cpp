/* ************************************************************************************* */
/*                                                                                       */
/*    File Name  : main.cpp                          ███████╗███████╗██╗██╗    ██╗   ██╗ */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║ */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║ */
/*    Created    : 2025/05/30 12:43:59               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ */
/*    Updated    : 2025/05/30 12:43:59               ███████╗███████║██║███████╗╚████╔╝  */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   */
/*                                                                                       */
/* ************************************************************************************* */


#include <iostream>

const std::string phrase = "HI THIS IS BRAIN";

const std::string* stringPTR = &phrase;

const std::string& stringREF = phrase;

int main(void){

    std::cout << std::endl << "============         MEMORY         ============" << std::endl << std::endl;

    std::cout << "The memory address of the string variable is : " << &phrase << std::endl;

    std::cout << "The memory address held by stringPTR is : " << stringPTR << std::endl;

    std::cout << "The memory address held by stringREF is : " << &stringREF << std::endl;

    std::cout << std::endl << "============          VALUE         ============" << std::endl << std::endl;

    std::cout << "The value of the string variable is : " << phrase << std::endl;

    std::cout << "The value pointed to by stringPTR is : " << *stringPTR << std::endl;

    std::cout << "The value pointed to by stringREF is : " << stringREF << std::endl << std::endl;


}
