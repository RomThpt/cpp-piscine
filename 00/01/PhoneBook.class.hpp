/* ************************************************************************************* */
/*                                                                                       */
/*    File Name  : PhoneBook.class.hpp               ███████╗███████╗██╗██╗    ██╗   ██╗ */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║ */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║ */
/*    Created    : 2025/05/30 07:41:23               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ */
/*    Updated    : 2025/05/30 07:41:23               ███████╗███████║██║███████╗╚████╔╝  */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   */
/*                                                                                       */
/* ************************************************************************************* */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class PhoneBook {
    public:
        Contact contacts[8];
        PhoneBook(void);
        ~PhoneBook(void);
        void addContact(Contact contact);
        Contact getContact(int index);
};

#endif