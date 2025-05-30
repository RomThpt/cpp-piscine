/* ************************************************************************************* */
/*                                                                                       */
/*    File Name  : PhoneBook.class.cpp               ███████╗███████╗██╗██╗    ██╗   ██╗ */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║ */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║ */
/*    Created    : 2025/05/30 07:41:02               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ */
/*    Updated    : 2025/05/30 07:41:02               ███████╗███████║██║███████╗╚████╔╝  */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   */
/*                                                                                       */
/* ************************************************************************************* */

#include <iostream>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
    return;
}

PhoneBook::~PhoneBook(void) {
    return;
}

void PhoneBook::addContact(Contact contact) {
    if (contacts[7].first_name != "") {
        for (int i = 7; i > 0; i--) {
            contacts[i] = contacts[i-1];
        }
    }
    contacts[0] = contact;
}

Contact PhoneBook::getContact(int index) {
    return contacts[index].getContact();
}


