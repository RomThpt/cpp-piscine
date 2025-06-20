#include "Bureaucrat.class.h"
/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : Bureaucrat.class.cpp              ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/20 12:05:37               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/20 12:05:37               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/Bureaucrat.class.h"

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high, you can't be more than 1st";
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too high, you can't be more than 150st";
}

Bureaucrat::Bureaucrat() : _name("Default")
{
    std::cout << "Bureaucrat Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade)
{
    std::cout << "Bureaucrat Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &cpy) : _name(cpy.getName()), _grade(cpy.getGrade())
{
    std::cout << "Bureaucrat Copy Constructor Called" << std::endl;
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor Called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return out;
}

std::string const Bureaucrat::getName() const
{
    return this->_name;
}
unsigned int Bureaucrat::getGrade() const
{
    return this->_grade;
}
void Bureaucrat::incrementGrade()
{
    try
    {
        if (this->_grade <= 1)
        {
            throw GradeTooHighException();
        }
        _grade--;
    }
    catch (GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception e)
    {
        std::cout << e.what() << std::endl;
    }
}
void Bureaucrat::decrementGrade()
{
    try
    {
        if (this->_grade >= 150)
        {
            throw GradeTooLowException();
        }
        _grade++;
    }
    catch (GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception e)
    {
        std::cout << e.what() << std::endl;
    }
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}