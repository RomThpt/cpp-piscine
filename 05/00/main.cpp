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

int main()
{
    std::cout << "=== BUREAUCRAT CLASS TESTING SUITE ===" << std::endl;

    testConstructorAndBasics();
    testCopyConstructor();
    testIncrementGrade();
    testDecrementGrade();
    testInvalidConstructor();
    testDefaultConstructor();

    std::cout << "\n=== ALL TESTS COMPLETED ===" << std::endl;
    return 0;
}