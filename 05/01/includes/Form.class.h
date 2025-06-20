/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Form.class.h                      ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/20 13:38:58               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/20 13:38:58               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef FORM_CLASS_H
#define FORM_CLASS_H

#include <iostream>

class Bureaucrat;

class Form
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
    bool _signed;
    unsigned int const _gradeSign;
    unsigned int const _gradeExecute;

public:
    Form();
    Form(std::string name, bool sign, unsigned int signedGrade, unsigned int executedGrade);
    ~Form();
    std::string const getName() const;
    bool getSignature() const;
    unsigned int getSignedGrade() const;
    unsigned int getExecutedGrade() const;
    void beSigned(class Bureaucrat &);
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif