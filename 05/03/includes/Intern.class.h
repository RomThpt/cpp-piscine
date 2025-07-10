/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Intern.h                          ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/07/09 15:49:01               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/07/09 15:49:01               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef INTERN_CLASS_H
#define INTERN_CLASS_H

#include "Bureaucrat.class.h"
#include "AForm.class.h"
#include <iostream>

class Intern
{
private:
    std::string _formName;
    std::string _target;

public:
    // Constructors and destructors
    Intern(void); // NOLINT
    virtual ~Intern(void);

    // Copy constructor and assignation operator overload
    Intern(const Intern &src);
    Intern &operator=(const Intern &rhs);

    AForm *makeForm(std::string const &formName,
                    std::string const &targetName);
};

#endif