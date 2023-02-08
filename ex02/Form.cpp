#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <ostream>
#include <iostream>

/* Exceptions */
const char*	Form::GradeTooHighException::what( void ) const throw()
{
	return "grade is too high";
}

const char*	Form::GradeTooLowException::what( void ) const throw()
{
	return "grade is too low";
}

Form :: Form () : name("default"), signe(false), grade_signed(150), grade_exec(150)
{
    std::cout << name << " is constructed " << std::endl;
}

Form :: Form(std :: string const name,const int grade_signed, const int grade_exec) \
: name(name), signe(false), grade_signed(grade_signed), grade_exec(grade_exec)
{
    if (grade_signed > 150  || grade_exec > 150)
		throw Form::GradeTooLowException();
	if (grade_signed < 1 || grade_exec < 1)
		throw Form::GradeTooHighException();
}

Form :: ~Form()
{
    std :: cout << "le formulaire : " << this->name \
     << " n'existe plus" << std :: endl;
}

Form :: Form(const Form &src) : name(src.name),signe(src.signe) ,\
grade_signed(src.grade_signed), grade_exec(src.grade_exec)
{
    std :: cout << "copy constructor called" << std :: endl;
    *this = src;
}

Form &Form :: operator=(const Form &src)
{
    (void)src;
    return (*this);
}

std :: string Form :: get_name() const
{
    return (this->name);
}

int Form :: get_gradeSigned() const
{
    return (this->grade_signed);
}

int Form :: get_gardeExec() const
{
    return (this->grade_exec);
}

bool   Form::getSigned() const 
{
    return this->signe;
}


void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->grade_signed)
	{
		throw Form::GradeTooLowException();
	}
	this->signe = true;
}

std::ostream& operator<<(std::ostream &out, const Form &form)
{
    out << "Form name: " << form.get_name() << std::endl;
    out << "Grade to sign: " << form.get_gradeSigned() << std::endl;
    out << "Grade to execute: " << form.get_gardeExec() << std::endl;
    out << "Signed: " << form.getSigned() << std::endl;
    return (out);
}
