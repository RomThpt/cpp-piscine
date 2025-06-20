/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : PresidentialPardonForm.class.h    ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/20 18:54:55               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/20 18:54:55               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef PRESIDENTIAL_PARDON_FORM_CLASS_H
#define PRESIDENTIAL_PARDON_FORM_CLASS_H

#include "AForm.class.h"

class PresidentialPardonForm : public AForm
{

private:
    std::string _target;

protected:
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm &cpy);
    ~PresidentialPardonForm();
    PresidentialPardonForm &operator=(PresidentialPardonForm &cpy);

    std::string const getTarget();
    void execute(Bureaucrat const &executor) const;
};

#endif