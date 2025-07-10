/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : ShrubberyCreationForm.class.cpp   ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/20 18:55:25               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/20 18:55:25               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/ShrubberyCreationForm.class.h"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default")
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &cpy)
{
    if (this->getSignGrade() > 145 || this->getExecGrade() > 137)
    {
        throw GradeTooLowException();
    }
    *this = cpy;
    std::ofstream file;
    file.open(this->_target + ".txt");
    file << "         .        +          .      .          . \n" +
                std::string("     .            _        .                    .\n") +
                "        , /                                      \n" +
                "        ;-._,-.____        ,-----.__\n" +
                " ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n" +
                "  `                 \\   _|`'=:_::.`.);  \\ __/ /\n" +
                "                      ,    `./  \\:. `.   )==-'  .\n" +
                "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n" +
                ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n" +
                "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n" +
                "  .      ,=':  \\    ` `/` ' , , ,:' `'--''.--''---._/`7\n" +
                "   `.   (    \\: \\,-._` ` + '\\, ,''   _,--._,---'':.__/\n" +
                "              \\:  `  X` _| _,\\/'   .-' \n" +
                ".               '':._:`\\____  /:'  /      .           .\n" +
                "                    \\::.  :\\/:'  /              +\n" +
                "  .                 `.:.  /:'  }      .\n" +
                "           .           ):_(:;   \\           .\n" +
                "                      /:. _/ ,  |\n" +
                "                   . (|::.     ,`                  .\n" +
                "     .                |::.    {\n" +
                "                      |::.\\  \\ `.\n" +
                "                      |:::(\\    |\n" +
                "              O       |:::/{ }  |                  (o\n" +
                "               )  ___/#\\::`/ (O ''==._____   O, (O  /`\n" +
                "          ~~~w/w~''~~,\\` `:/,-(~`''~~~~~~~~''~o~\\~/~w|/~\n" +
                "      ~~~~~~~~~~~~~~~~~~~~~~~\\\\W~~~~~~~~~~~~\\|/~~";
    file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor Called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &cpy)
{
    return cpy;
}

std::string const ShrubberyCreationForm::getTarget()
{
    return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!this->isSigned())
        throw FormNotSignedException();
    if ((int)executor.getGrade() > this->getExecGrade())
        throw GradeTooLowException();

    std::ofstream file;
    file.open(this->_target + "_shrubbery");
    file << "ASCII Trees created by " << executor.getName() << std::endl;
    file.close();
    std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}