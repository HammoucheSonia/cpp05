#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <ostream>

int main()
{
    Bureaucrat a("we", 1777);
    a.grade_decremente();

    Bureaucrat b("hello", 30);
    b.grade_decremente();


    PresidentialPardonForm file("hay");
    file.beSigned(b);
    file.execute(b);

    ShrubberyCreationForm file_2("hello_you");
    file_2.execute(b);
    

    return (0);
}