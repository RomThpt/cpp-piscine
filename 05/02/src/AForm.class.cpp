/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : AForm.class.cpp                   ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/20 18:55:20               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/20 18:55:20               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/AForm.class.h"

AForm::AForm(void) : _name("null"), _signed(0), _signGrade(1), _execGrade(1)
{
    std::cout << "AForm default constructor called" << std::endl;
    return;
}

AForm::AForm(std::string const name, int const signGrade, int const execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
    std::cout << "AForm constructor called" << std::endl;
    if (signGrade < 1)
    {
        throw AForm::GradeTooHighException();
    }
    else if (signGrade > 150)
    {
        throw AForm::GradeTooLowException();
    }
    else if (execGrade < 1)
    {
        throw AForm::GradeTooHighException();
    }
    else if (execGrade > 150)
    {
        throw AForm::GradeTooLowException();
    }
    else
    {
        this->_signed = 0;
    }
    return;
}

// Destructor
AForm::~AForm(void)
{
    std::cout << "AForm destructor called" << std::endl;
    return;
}

// Copy constructor
AForm::AForm(const AForm &src) : _name(src._name), _signed(src._signed),
                                 _signGrade(src._signGrade), _execGrade(src._execGrade)
{
    std::cout << "AForm copy constructor called" << std::endl;
    *this = src;
    return;
}

// Assignation operator
AForm &AForm::operator=(const AForm &rhs)
{
    std::cout << "AForm assignation operator called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_signed = rhs._signed;
    return (*this);
}

// Accessors
std::string AForm::getName(void) const
{
    return (this->_name);
}

int AForm::isSigned(void) const
{
    return (this->_signed);
}
void AForm::setSigned(void)
{
    this->_signed = 1;
}
int AForm::getSignGrade(void) const
{
    return (this->_signGrade);
}
int AForm::getExecGrade(void) const
{
    return (this->_execGrade);
}

// Methods
void AForm::beSigned(const Bureaucrat &br)
{
    if ((int)br.getGrade() <= this->_signGrade)
    {
        this->_signed = 1;
    }
    else
    {
        throw AForm::GradeTooLowException();
    }
}

void AForm::signForm(const Bureaucrat &br)
{
    if (this->_signed == 1)
    {
        std::cout << br.getName() << " signed " << this->_name << std::endl;
    }
    else
    {
        std::cout << br.getName() << " couldn't sign " << this->_name << " because he's got too low grade" << std::endl;
    }
}

// Overload of the output operator
std::ostream &operator<<(std::ostream &ost, const AForm &src)
{
    ost << src.getName() << " : " << "signed grade " << src.getSignGrade() << ", " << "execution grade " << src.getExecGrade() << "";
    return (ost);
}