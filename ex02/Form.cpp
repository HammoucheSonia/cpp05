#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <ostream>
#include <iostream>

Form :: Form(std :: string const name,const int grade_signed, const int grade_exec) \
: name(name), grade_signed(grade_signed), grade_exec(grade_exec)
{
    this->signe = false;
    std :: cout << "le formulaire : " << this->name << " a ete cree" << std :: endl;
}

Form :: ~Form()
{
    std :: cout << "le formulaire : " << this->name \
     << " n'existe plus" << std :: endl;
}

std :: string Form :: get_name() const
{
    return (this->name);
}

int Form :: get_gradeSigned()
{
    return (this->grade_signed);
}

int Form :: get_gardeExec() const
{
    return (this->grade_exec);
}

bool  Form :: beSigned(Bureaucrat un_bureaucrat)
{
    if (un_bureaucrat.getGrade() <= this->grade_signed)
    {
        un_bureaucrat.signForm(true);
        return (true);
    }
    else
    {   
        un_bureaucrat.signForm(false);
        return (false);
    }
}
