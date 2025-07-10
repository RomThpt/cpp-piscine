/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : ShrubberyCreationForm.class.h     ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/20 18:54:43               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/20 18:54:43               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef SHRUBBERY_CREATION_FORM_CLASS_H
#define SHRUBBERY_CREATION_FORM_CLASS_H

#include "AForm.class.h"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
    std::string _target;

protected:
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm &cpy);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(ShrubberyCreationForm &cpy);

    std::string const getTarget();
    void execute(Bureaucrat const &executor) const;
};

#endif