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

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Default")
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
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

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!this->isSigned())
        throw FormNotSignedException();
    if ((int)executor.getGrade() > this->getExecGrade())
        throw GradeTooLowException();

    std::cout << "DRILLING NOISES..." << std::endl;
    int success = rand() % 2;
    if (success == 1)
    {
        std::cout << this->_target << " has been robotomized successfully by " << executor.getName() << std::endl;
    }
    else
    {
        std::cout << "Robotomy of " << this->_target << " failed!" << std::endl;
        throw RobotizeException();
    }
}