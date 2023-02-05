#include "Bureaucrat.hpp"
#include <ostream>

int main()
{
    Bureaucrat a("we", 1777);
    a.grade_decremente();
    a.grade_incremente();

    Bureaucrat b("sonia", 7);
    b.grade_decremente();
    b.grade_incremente();
    b.grade_incremente();
    b.grade_incremente();
    b.grade_incremente();
    b.grade_incremente();
    b.grade_incremente();
    b.grade_incremente();
    b.grade_incremente();
    b.grade_incremente();

    return (0);
}