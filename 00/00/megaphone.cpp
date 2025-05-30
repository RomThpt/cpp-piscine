/* ************************************************************************************* */
/*                                                                                       */
/*    File Name  : megaphone.cpp                     ███████╗███████╗██╗██╗    ██╗   ██╗ */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║ */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║ */
/*    Created    : 2025/05/30 07:39:07               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ */
/*    Updated    : 2025/05/30 07:39:07               ███████╗███████║██║███████╗╚████╔╝  */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   */
/*                                                                                       */
/* ************************************************************************************* */


#include <iostream>
#include <string>

int main(int argc, char **argv) {
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    
    for (int i = 1; i < argc; i++) {
        std::string phrase = argv[i];
        for (size_t j = 0; j < phrase.length(); j++) {
            std::cout << (char)std::toupper(phrase[j]);
        }
    }
    std::cout << std::endl;
    return 0;
}

