/* ************************************************************************************* */
/*                                                                                       */
/*    File Name  : main.cpp                          ███████╗███████╗██╗██╗    ██╗   ██╗ */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║ */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║ */
/*    Created    : 2025/05/30 07:40:37               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ */
/*    Updated    : 2025/05/30 07:40:37               ███████╗███████║██║███████╗╚████╔╝  */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   */
/*                                                                                       */
/* ************************************************************************************* */

#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>
#include <cctype>


std::string toUpper(std::string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}

int main(void) {
    PhoneBook phonebook;
    std::string choice;
    
    while (true) {
        std::cout << "Welcome to your phonebook" << std::endl;
        std::cout << "What do you want to do? (ADD, SEARCH, EXIT)" << std::endl;
        std::cin >> choice;
        
        if (toUpper(choice) == "ADD") {
           // TODO: add contact
        }
        else if (toUpper(choice) == "SEARCH") {
            for (int i = 0; i < 8; i++) {
                std::cout << i << " | " << phonebook.getContact(i).first_name << " | " << phonebook.getContact(i).last_name << " | " << phonebook.getContact(i).phone_number << std::endl;
            }
            std::cout << "Enter the index of the contact you want to search for: " << std::endl;
            std::string index;
            std::cin >> index;
            phonebook.getContact(std::stoi(index));
        }
        else if (toUpper(choice) == "EXIT") {
            return 0;
        }
        else {
            std::cout << "Invalid choice" << std::endl;
        }
    }
}

