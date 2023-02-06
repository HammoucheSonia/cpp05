#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <ostream>

int main()
{
    Bureaucrat a("we", 1777);
    a.grade_decremente();

    Bureaucrat b("hello", 5);
    b.grade_decremente();

    Form C("bonjour", 5, 7);
    C.beSigned(b);

    return (0);
}