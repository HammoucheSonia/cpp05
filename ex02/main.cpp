#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <ostream>

int main()
{
    /*std::cout << "--- Test ShrubberyCreationForm ---" << std::endl;
    std::cout << std::endl;
    Bureaucrat b1("b1", 25);
    Bureaucrat b2("b2", 148);
    ShrubberyCreationForm shrubbery("shrubbery");
    shrubbery.beSigned(b1);
    std::cout << shrubbery << std::endl;
    b1.signForm(shrubbery);
    shrubbery.execute(b1);
    shrubbery.execute(b2);
    std::cout << std::endl;
    std::cout << "--- Test ShrubberyCreationForm Finish ---" << std::endl;

    std::cout << "--- Test RobotomyRequestForm ---" << std::endl;
    std::cout << std::endl;
    Bureaucrat b1("b1", 25);
    Bureaucrat b2("b2", 80);
    RobotomyRequestForm robotomy("robotomy");
    robotomy.beSigned(b1);
    std::cout << robotomy << std::endl;
    b1.signForm(robotomy);
    robotomy.execute(b1);
    robotomy.execute(b2);
    std::cout << std::endl;
    std::cout << "--- Test RobotomyRequestForm Finish ---" << std::endl;*/

    std::cout << "--- Test PresidentialPardonForm ---" << std::endl;
    std::cout << std::endl;
    Bureaucrat b1("b1", 1);
    Bureaucrat b2("b2", 30);
    PresidentialPardonForm presidential("presidential");
    presidential.beSigned(b1);
    std::cout << presidential << std::endl;
    b1.signForm(presidential);
    std :: cout << "#####celui qui a le droit \n";
    presidential.execute(b1);
    std :: cout << "#####celui qui n'a pas le droit \n";
    presidential.execute(b2);

    std::cout << std::endl;
    std::cout << "--- Test PresidentialPardonForm Finish ---" << std::endl;



	std::cout << "--- 1. Creating the forms  and bureaucrats ---" << std::endl;
	ShrubberyCreationForm shrub("coco");
	RobotomyRequestForm robot("student");
	PresidentialPardonForm pres("criminal dude");
	Bureaucrat ceo("CEO", 1);
	Bureaucrat bob("Bob", 70);

	std::cout << shrub;
	std::cout << robot;
	std::cout << pres;
	std::cout << bob;
	std::cout << ceo;
	std::cout << std::endl;

	std::cout << "--- 2. CEO  and Bob try executing the forms ---" << std::endl;
	ceo.executeForm(shrub);
	ceo.executeForm(robot);
	ceo.executeForm(pres);
	bob.executeForm(shrub);
	bob.executeForm(robot);
	bob.executeForm(pres);
	std::cout << std::endl;

	std::cout << "--- 3. CEO and Bob try signing the forms ---" << std::endl;
	bob.signForm(shrub);
	bob.signForm(robot);
	bob.signForm(pres);
	ceo.signForm(shrub);
	ceo.signForm(robot);
	ceo.signForm(pres);
	std::cout << std::endl;

	std::cout << "--- 4. CEO  and Bob try executing the forms again ---" << std::endl;
	bob.executeForm(shrub);
	bob.executeForm(robot);
	bob.executeForm(pres);
	ceo.executeForm(shrub);
	ceo.executeForm(robot);
	ceo.executeForm(pres);
	
    std::cout << std::endl;
    std :: cout << "############################################\n\n\n";

    return (0);
}