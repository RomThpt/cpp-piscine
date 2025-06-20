/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Form.class.cpp                    ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/20 13:39:06               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/20 13:39:06               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/Form.class.h"
#include "../includes/Bureaucrat.class.h"

Form::Form() : _name("Default"), _signed(false), _gradeSign(10), _gradeExecute(10)
{
    std::cout << "Form Default Constructor Created" << std::endl;
}
Form::Form(std::string name, bool sign, unsigned int signedGrade, unsigned int executedGrade) : _name(name), _signed(sign), _gradeSign(signedGrade), _gradeExecute(executedGrade)
{
    std::cout << "Form Constructor Created" << std::endl;
}
Form::~Form()
{
    std::cout << "Form Destructor Created" << std::endl;
}
std::string const Form::getName() const
{
    return this->_name;
}
bool Form::getSignature() const
{
    return this->_signed;
}
unsigned int Form::getSignedGrade() const
{
    return _gradeSign;
}
unsigned int Form::getExecutedGrade() const
{
    return _gradeExecute;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Form grade too high!";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Form grade too low!";
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->getSignedGrade())
    {
        this->_signed = true;
    }
    else
    {
        throw GradeTooLowException();
    }
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "Form: " << form.getName()
        << ", Signed: " << (form.getSignature() ? "Yes" : "No")
        << ", Sign Grade: " << form.getSignedGrade()
        << ", Execute Grade: " << form.getExecutedGrade();
    return out;
}