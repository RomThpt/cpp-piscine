/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Intern.class.cpp                  ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/07/09 15:49:19               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/07/09 15:49:19               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/AForm.class.h"                  //NOLINT
#include "../includes/PresidentialPardonForm.class.h" //NOLINT
#include "../includes/RobotomyRequestForm.class.h"    //NOLINT
#include "../includes/ShrubberyCreationForm.class.h"  //NOLINT
#include "../includes/Intern.class.h"                 //NOLINT

// Constructors
Intern::Intern(void)
{
    std::cout << "Intern default constructor called" << std::endl;
    return;
}

// Destructor
Intern::~Intern(void)
{
    std::cout << "Intern destructor called" << std::endl;
    return;
}

// Assignation operator
Intern &Intern::operator=(const Intern &rhs)
{
    std::cout << "Intern assignation operator called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_formName = rhs._formName;
    this->_target = rhs._target;
    return (*this);
}

AForm *Intern::makeForm(std::string const &formName,
                        std::string const &targetName)
{
    const std::string formsName[3] =
        {"shrubbery creation request", "robotomy request",
         "presidential pardon request"};
    int n = -1;
    for (int i = 0; i < 3; i++)
    {
        if (formName == formsName[i])
        {
            n = i;
            break;
        }
    }

    switch (n)
    {
    case 0:
        std::cout << "Intern create ShrubberyCreationForm" << std::endl;
        return new ShrubberyCreationForm(targetName);
    case 1:
        std::cout << "Intern create RobotomyRequestForm" << std::endl;
        return new RobotomyRequestForm(targetName);
    case 2:
        std::cout << "Intern create PresidentialPardonForm"
                  << std::endl;
        return new PresidentialPardonForm(targetName);
    default:
        throw AForm::FormNotFound();
    }

    return (0);
}