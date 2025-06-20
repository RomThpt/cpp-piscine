/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : RobotomyRequestForm.class.cpp     ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/20 18:55:31               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/20 18:55:31               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/RobotomyRequestForm.class.h"

RobotomyRequestForm::RobotomyRequestForm() : _target("Default")
{
    if (this->getSignGrade() > 72 || this->getExecGrade() > 45)
    {
        throw GradeTooLowException();
    }
    int robotomized = rand() % 2;
    std::cout << "GRRRRRRRRRRRRRRRRRR" << std::endl;
    if (robotomized == 0)
    {
        std::cout << this->_target << " has been robotomized" << std::endl;
    }
    else
    {
        throw RobotizeException();
    }
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target)
{
    if (this->getSignGrade() > 72 || this->getExecGrade() > 45)
    {
        throw GradeTooLowException();
    }
    int robotomized = rand() % 2;
    std::cout << "GRRRRRRRRRRRRRRRRRR" << std::endl;
    if (robotomized == 0)
    {
        std::cout << this->_target << " has been robotomized" << std::endl;
    }
    else
    {
        throw RobotizeException();
    }
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &cpy)
{
    if (this->getSignGrade() > 72 || this->getExecGrade() > 45)
    {
        throw GradeTooLowException();
    }
    int robotomized = rand() % 2;
    std::cout << "GRRRRRRRRRRRRRRRRRR" << std::endl;
    if (robotomized == 0)
    {
        *this = cpy;
        std::cout
            << this->_target << " has been robotomized" << std::endl;
    }
    else
    {
        throw RobotizeException();
    }
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor Called" << std::endl;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &cpy)
{
    return cpy;
}

std::string const RobotomyRequestForm::getTarget()
{
    return this->_target;
}