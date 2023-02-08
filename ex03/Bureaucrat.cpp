#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
}
 

Bureaucrat :: Bureaucrat(const std :: string name, int grade): name(name)
{
    if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
    this->grade = grade;
}


Bureaucrat :: ~Bureaucrat()
{
    std :: cout << this->name << " le bureaucrat est mort" \
    << std :: endl;
}

Bureaucrat :: Bureaucrat(const Bureaucrat &src)
{
    std :: cout << "copy constructor called" << std :: endl;
    *this = src;
}

Bureaucrat &Bureaucrat :: operator=(const Bureaucrat &src)
{
    this->grade = src.getGrade();
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat :: getGrade() const
{
    return (this->grade);
}

void Bureaucrat :: grade_incremente()
{
    if (this->grade == 1) {
		throw GradeTooHighException();
	}
    this->grade = this->grade - 1;
    std :: cout << this->name << " : j'ai un nouveau grade " \
     << this->grade << std :: endl;
}

void Bureaucrat :: grade_decremente()
{
    if (this->grade == 150) {
        throw GradeTooLowException();
	}
    this->grade = this->grade + 1;
    std :: cout << this->name << " : j'ai un nouveau grade " \
     << this->grade << std :: endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw ()
{
	return "too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw ()
{
	return "too low";
}

void Bureaucrat :: signForm(Form &form)
{
    if (form.getSigned() == true)
        std :: cout << "ce formulaire est deja sige" << std :: endl;
    else 
    {
        try
        {
            form.beSigned(*this);
        }
        catch(const std::exception& e)
        {
            std::cout << "cannot assighn because " << e.what() << '\n';
        }
    }
}

void Bureaucrat::executeForm(Form const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " execute " << form.get_name();
	}
	catch(const std::exception& e)
	{
		std::cout << " failed because ";
		std::cerr << e.what() << '\n';
	}
}

std :: ostream &operator<<(std :: ostream &o, Bureaucrat const &src)
{
    o << src.getName() << " de grade : " << src.getGrade() << std :: endl; 
    return(o);
}