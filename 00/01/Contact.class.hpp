/* ************************************************************************************* */
/*                                                                                       */
/*    File Name  : Contact.class.hpp                 ███████╗███████╗██╗██╗    ██╗   ██╗ */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║ */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║ */
/*    Created    : 2025/05/30 07:40:18               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ */
/*    Updated    : 2025/05/30 07:40:18               ███████╗███████║██║███████╗╚████╔╝  */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   */
/*                                                                                       */
/* ************************************************************************************* */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <string>

class Contact {
    public:
        Contact(void);
        ~Contact(void);
        std::string first_name;
        std::string last_name;
        std::string phone_number;
        void setContact(Contact contact);
        Contact getContact(void) const;
};

#endif