#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern &src);
        Intern &operator=(const Intern &src);
        Form* makeForm(std :: string name, std :: string target);
};

#endif
