/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : AForm.class.h                     ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/20 18:54:29               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/20 18:54:29               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef AFORM_CLASS_H
#define AFORM_CLASS_H

#include <iostream>
#include "Bureaucrat.class.h"

class Bureaucrat;

class AForm
{
private:
    const std::string _name;
    int _signed;
    const int _signGrade;
    const int _execGrade;

public:
    // Constructors and destructors
    AForm(void);                                                             // NOLINT
    AForm(std::string const name, int const signGrade, int const execGrade); // NOLINT
    virtual ~AForm(void);

    // Copy constructor and assignation operator overload
    AForm(const AForm &src);
    AForm &operator=(const AForm &rhs);

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return ("Grade is too high");
        }
    };
    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return ("Grade is too low");
        }
    };
    class NameTooShortException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return ("Name is too short");
        }
    };
    class FormNotSignedException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return ("Form is not signed");
        }
    };

    // Accessors
    std::string getName(void) const;
    int isSigned(void) const;
    void setSigned(void);
    int getSignGrade(void) const;
    int getExecGrade(void) const;

    // Methods
    void beSigned(const Bureaucrat &br);
    void signForm(const Bureaucrat &br);
    virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &ost, const AForm &src);

#endif