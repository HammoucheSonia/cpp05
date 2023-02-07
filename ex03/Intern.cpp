#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern ::Intern()
{
    std ::cout << "Intern a ete cree" << std ::endl;
}

Intern ::~Intern()
{
    std ::cout << "Intern a fini sa periode stage"
               << std ::endl;
}

Intern ::Intern(const Intern &src) 
{
    std ::cout << "copy constructor called" << std ::endl;
    *this = src;
}

Intern &Intern ::operator=(const Intern &src)
{
    (void)src;
    return (*this);
}

Form *Intern ::makeForm(std ::string name, std ::string target)
{
    std ::string name_form[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    for (int i = 0; i < 3; i++)
    {
        if (name == name_form[i])
        {
            switch (i)
            {
            case 0:
                std::cout << "Intern creates RobotomyRequestForm" << std::endl;
                return new RobotomyRequestForm(target);
            case 1:
                std::cout << "Intern creates PresidentialPardonForm" << std::endl;
                return new PresidentialPardonForm(target);
            case 2:
                std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
                return new ShrubberyCreationForm(target);
            default:
                break;
            }
        }
    }
    std ::cout << "Ce formualaire n'existe pas" << std ::endl;
    return (NULL);
}