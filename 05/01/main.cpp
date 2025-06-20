/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : main.cpp                          ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/06/20 12:05:04               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/06/20 12:05:04               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "includes/Bureaucrat.class.h"
#include "includes/Form.class.h"

void testConstructorAndBasics()
{
    std::cout << "\n=== Testing Constructor and Basic Functions ===" << std::endl;

    Bureaucrat bob("Bob", 75);
    std::cout << "Created: " << bob << std::endl;
    std::cout << "Name: " << bob.getName() << std::endl;
    std::cout << "Grade: " << bob.getGrade() << std::endl;
}

void testCopyConstructor()
{
    std::cout << "\n=== Testing Copy Constructor ===" << std::endl;

    Bureaucrat original("Alice", 50);
    Bureaucrat copy(original);
    std::cout << "Original: " << original << std::endl;
    std::cout << "Copy: " << copy << std::endl;
}

void testIncrementGrade()
{
    std::cout << "\n=== Testing Grade Increment ===" << std::endl;

    Bureaucrat worker("Worker", 75);
    std::cout << "Before increment: " << worker << std::endl;
    worker.incrementGrade();
    std::cout << "After increment: " << worker << std::endl;

    // Test boundary condition
    Bureaucrat topBureaucrat("TopGuy", 2);
    std::cout << "Before increment (grade 2): " << topBureaucrat << std::endl;
    topBureaucrat.incrementGrade();
    std::cout << "After increment (should be 1): " << topBureaucrat << std::endl;

    // Test exception
    std::cout << "Testing increment at grade 1 (should throw exception):" << std::endl;
    topBureaucrat.incrementGrade();
}

void testDecrementGrade()
{
    std::cout << "\n=== Testing Grade Decrement ===" << std::endl;

    Bureaucrat worker("Worker", 75);
    std::cout << "Before decrement: " << worker << std::endl;
    worker.decrementGrade();
    std::cout << "After decrement: " << worker << std::endl;

    // Test boundary condition
    Bureaucrat lowBureaucrat("LowGuy", 149);
    std::cout << "Before decrement (grade 149): " << lowBureaucrat << std::endl;
    lowBureaucrat.decrementGrade();
    std::cout << "After decrement (should be 150): " << lowBureaucrat << std::endl;

    // Test exception
    std::cout << "Testing decrement at grade 150 (should throw exception):" << std::endl;
    lowBureaucrat.decrementGrade();
}

void testInvalidConstructor()
{
    std::cout << "\n=== Testing Invalid Constructor Values ===" << std::endl;

    try
    {
        std::cout << "Trying to create bureaucrat with grade 0:" << std::endl;
        Bureaucrat invalid1("Invalid1", 0);
        std::cout << invalid1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        std::cout << "Trying to create bureaucrat with grade 151:" << std::endl;
        Bureaucrat invalid2("Invalid2", 151);
        std::cout << invalid2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}

void testDefaultConstructor()
{
    std::cout << "\n=== Testing Default Constructor ===" << std::endl;

    Bureaucrat defaultBureaucrat;
    std::cout << "Default bureaucrat: " << defaultBureaucrat << std::endl;
}

void testFormCreation()
{
    std::cout << "\n=== Testing Form Creation ===" << std::endl;

    Form taxForm("Tax Form", false, 50, 25);
    std::cout << "Created: " << taxForm << std::endl;
    std::cout << "Name: " << taxForm.getName() << std::endl;
    std::cout << "Signed: " << taxForm.getSignature() << std::endl;
    std::cout << "Grade to sign: " << taxForm.getSignedGrade() << std::endl;
    std::cout << "Grade to execute: " << taxForm.getExecutedGrade() << std::endl;
}

void testFormSigning()
{
    std::cout << "\n=== Testing Form Signing ===" << std::endl;

    Form importantForm("Important Document", false, 30, 10);
    Bureaucrat highRank("Manager", 25);
    Bureaucrat lowRank("Intern", 75);

    std::cout << "Form before signing: " << importantForm << std::endl;
    std::cout << "High rank bureaucrat: " << highRank << std::endl;
    std::cout << "Low rank bureaucrat: " << lowRank << std::endl;

    // Successful signing
    std::cout << "\n--- High rank trying to sign ---" << std::endl;
    highRank.signForm(importantForm);
    std::cout << "Form after signing: " << importantForm << std::endl;

    // Failed signing attempt
    Form topSecretForm("Top Secret", false, 5, 1);
    std::cout << "\n--- Low rank trying to sign top secret form ---" << std::endl;
    std::cout << "Top secret form: " << topSecretForm << std::endl;
    lowRank.signForm(topSecretForm);
}

void testFormSigningEdgeCases()
{
    std::cout << "\n=== Testing Form Signing Edge Cases ===" << std::endl;

    // Test exact grade match
    Form exactForm("Exact Grade Form", false, 50, 25);
    Bureaucrat exactBureaucrat("Exact", 50);
    std::cout << "Bureaucrat with exact required grade:" << std::endl;
    std::cout << exactBureaucrat << std::endl;
    std::cout << exactForm << std::endl;
    exactBureaucrat.signForm(exactForm);

    // Test already signed form
    std::cout << "\n--- Trying to sign already signed form ---" << std::endl;
    Bureaucrat anotherBureaucrat("Another", 10);
    anotherBureaucrat.signForm(exactForm);
}

void testInvalidFormCreation()
{
    std::cout << "\n=== Testing Invalid Form Creation ===" << std::endl;

    try
    {
        std::cout << "Creating form with invalid sign grade (0):" << std::endl;
        Form invalidForm1("Invalid1", false, 0, 50);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        std::cout << "Creating form with invalid execute grade (151):" << std::endl;
        Form invalidForm2("Invalid2", false, 50, 151);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}

int main()
{
    std::cout << "=== BUREAUCRAT CLASS TESTING SUITE ===" << std::endl;

    testConstructorAndBasics();
    testCopyConstructor();
    testIncrementGrade();
    testDecrementGrade();
    testInvalidConstructor();
    testDefaultConstructor();

    // New Form tests
    testFormCreation();
    testFormSigning();
    testFormSigningEdgeCases();
    testInvalidFormCreation();

    std::cout << "\n=== ALL TESTS COMPLETED ===" << std::endl;
    return 0;
}