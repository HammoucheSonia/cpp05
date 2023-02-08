#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <ostream>

int main()
{
    std::cout << "--- Test Intern ShrubberyCreationForm ---" << std::endl;
    std::cout << std::endl;
    Bureaucrat b1("b1", 5);
    Bureaucrat b2("b2", 148);
    Intern intern;
    Form *form = intern.makeForm("shrubbery creation", "shrubbery");
    b1.signForm(*form);
    b1.executeForm(*form);
    b2.executeForm(*form);
    std::cout << std::endl;
    std::cout << "--- Test Intern ShrubberyCreationForm Finish ---" << std::endl;

    delete form;
    return (0);
}