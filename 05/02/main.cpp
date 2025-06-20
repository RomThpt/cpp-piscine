#include "includes/Bureaucrat.class.h"
#include "includes/ShrubberyCreationForm.class.h"
#include "includes/RobotomyRequestForm.class.h"
#include "includes/PresidentialPardonForm.class.h"
#include <iostream>

int main()
{
    std::cout << "=== BUREAUCRAT TESTS ===" << std::endl;

    // Test Bureaucrat creation and basic functionality
    try
    {
        Bureaucrat bob("Bob", 50);
        std::cout << bob << std::endl;

        Bureaucrat alice("Alice", 1);
        std::cout << alice << std::endl;

        Bureaucrat charlie("Charlie", 150);
        std::cout << charlie << std::endl;

        // Test grade increment/decrement
        bob.incrementGrade();
        std::cout << "After increment: " << bob << std::endl;

        bob.decrementGrade();
        std::cout << "After decrement: " << bob << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== FORM CREATION TESTS ===" << std::endl;

    // Test ShrubberyCreationForm
    try
    {
        std::cout << "Creating ShrubberyCreationForm..." << std::endl;
        ShrubberyCreationForm shrub("garden");
        std::cout << "ShrubberyCreationForm created with target: " << shrub.getTarget() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception creating ShrubberyCreationForm: " << e.what() << std::endl;
    }

    // Test RobotomyRequestForm
    try
    {
        std::cout << "Creating RobotomyRequestForm..." << std::endl;
        RobotomyRequestForm robot("Bender");
        std::cout << "RobotomyRequestForm created with target: " << robot.getTarget() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception creating RobotomyRequestForm: " << e.what() << std::endl;
    }

    // Test PresidentialPardonForm
    try
    {
        std::cout << "Creating PresidentialPardonForm..." << std::endl;
        PresidentialPardonForm pardon("Arthur Dent");
        std::cout << "PresidentialPardonForm created with target: " << pardon.getTarget() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception creating PresidentialPardonForm: " << e.what() << std::endl;
    }

    std::cout << "\n=== FORM SIGNING TESTS ===" << std::endl;

    try
    {
        // Create bureaucrats with different grades
        Bureaucrat lowGrade("LowGrade", 150);
        Bureaucrat midGrade("MidGrade", 50);
        Bureaucrat highGrade("HighGrade", 1);

        // Create forms
        ShrubberyCreationForm shrubForm("park");
        RobotomyRequestForm robotForm("C3PO");
        PresidentialPardonForm pardonForm("Ford Prefect");

        std::cout << "Testing form signing with different bureaucrat grades..." << std::endl;

        // Test signing with low grade bureaucrat
        std::cout << "\n--- Low Grade Bureaucrat Tests ---" << std::endl;
        lowGrade.signForm(shrubForm);
        lowGrade.signForm(robotForm);
        lowGrade.signForm(pardonForm);

        // Test signing with mid grade bureaucrat
        std::cout << "\n--- Mid Grade Bureaucrat Tests ---" << std::endl;
        midGrade.signForm(shrubForm);
        midGrade.signForm(robotForm);
        midGrade.signForm(pardonForm);

        // Test signing with high grade bureaucrat
        std::cout << "\n--- High Grade Bureaucrat Tests ---" << std::endl;
        highGrade.signForm(shrubForm);
        highGrade.signForm(robotForm);
        highGrade.signForm(pardonForm);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception during form signing: " << e.what() << std::endl;
    }

    std::cout << "\n=== EXCEPTION TESTS ===" << std::endl;

    // Test grade too high exception
    try
    {
        Bureaucrat impossible("Impossible", 0);
    }
    catch (std::exception &e)
    {
        std::cout << "Caught expected exception: " << e.what() << std::endl;
    }

    // Test grade too low exception
    try
    {
        Bureaucrat impossible2("Impossible2", 151);
    }
    catch (std::exception &e)
    {
        std::cout << "Caught expected exception: " << e.what() << std::endl;
    }

    // Test increment beyond limit
    try
    {
        Bureaucrat topBureaucrat("TopBureaucrat", 1);
        std::cout << "Before increment: " << topBureaucrat << std::endl;
        topBureaucrat.incrementGrade(); // Should throw exception
    }
    catch (std::exception &e)
    {
        std::cout << "Caught expected exception: " << e.what() << std::endl;
    }

    // Test decrement beyond limit
    try
    {
        Bureaucrat bottomBureaucrat("BottomBureaucrat", 150);
        std::cout << "Before decrement: " << bottomBureaucrat << std::endl;
        bottomBureaucrat.decrementGrade(); // Should throw exception
    }
    catch (std::exception &e)
    {
        std::cout << "Caught expected exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== COPY CONSTRUCTOR TESTS ===" << std::endl;

    try
    {
        Bureaucrat original("Original", 42);
        Bureaucrat copy(original);
        std::cout << "Original: " << original << std::endl;
        std::cout << "Copy: " << copy << std::endl;

        ShrubberyCreationForm originalForm("originalTarget");
        ShrubberyCreationForm copyForm(originalForm);
        std::cout << "Original form target: " << originalForm.getTarget() << std::endl;
        std::cout << "Copy form target: " << copyForm.getTarget() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception during copy tests: " << e.what() << std::endl;
    }

    std::cout << "\n=== ALL TESTS COMPLETED ===" << std::endl;

    return 0;
}