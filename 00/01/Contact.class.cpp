/* ************************************************************************************* */
/*                                                                                       */
/*    File Name  : Contact.class.cpp                 ███████╗███████╗██╗██╗    ██╗   ██╗ */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║ */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║ */
/*    Created    : 2025/05/30 07:39:53               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ */
/*    Updated    : 2025/05/30 07:39:53               ███████╗███████║██║███████╗╚████╔╝  */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   */
/*                                                                                       */
/* ************************************************************************************* */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void) {
    this->first_name = "";
    this->last_name = "";
    this->phone_number = "";
}


Contact::~Contact(void) {
    return;
}

void Contact::setContact(Contact contact) {
    this->first_name = contact.first_name;
    this->last_name = contact.last_name;
    this->phone_number = contact.phone_number;
}

Contact Contact::getContact(void) const {
    return *this;
}
