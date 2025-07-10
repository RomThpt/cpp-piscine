/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : RobotomyRequestForm.class.h       ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/20 18:54:49               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/20 18:54:49               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef ROBOTOMY_REQUEST_FORM_CLASS_H
#define ROBOTOMY_REQUEST_FORM_CLASS_H

#include "AForm.class.h"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
    class RobotizeException
    {
    public:
        virtual const char *what() const throw()
        {
            return ("Robotize failed");
        }
    };

private:
    std::string _target;

protected:
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm &cpy);
    ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(RobotomyRequestForm &cpy);

    std::string const getTarget();
    void execute(Bureaucrat const &executor) const;
};

#endif