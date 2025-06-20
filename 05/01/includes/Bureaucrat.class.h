/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Bureaucrat.class.h                ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/20 12:05:30               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/20 12:05:30               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef BUREAUCRAT_CLASS_H
#define BUREAUCRAT_CLASS_H

#include <iostream>
#include "Form.class.h"

class Bureaucrat
{
    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

private:
    std::string const _name;
    unsigned int _grade;

protected:
public:
    Bureaucrat();
    Bureaucrat(std::string, unsigned int);
    Bureaucrat(Bureaucrat &cpy);
    ~Bureaucrat();

    std::string const getName() const;
    unsigned int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(Form &form);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif