/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : PresidentialPardonForm.class.cpp  ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/20 18:55:38               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/20 18:55:38               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/PresidentialPardonForm.class.h"

PresidentialPardonForm::PresidentialPardonForm() : _target("Default")
{
    if (this->getSignGrade() > 25 || this->getExecGrade() > 5)
    {
        throw GradeTooLowException();
    }

    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _target(target)
{
    if (this->getSignGrade() > 25 || this->getExecGrade() > 5)
    {
        throw GradeTooLowException();
    }

    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &cpy)
{
    if (this->getSignGrade() > 25 || this->getExecGrade() > 5)
    {
        throw GradeTooLowException();
    }
    *this = cpy;

    std::cout
        << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor Called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &cpy)
{
    if (this->getSignGrade() > 25 || this->getExecGrade() > 5)
    {
        throw GradeTooLowException();
    }
    return cpy;
}

std::string const PresidentialPardonForm::getTarget()
{
    return this->_target;
}