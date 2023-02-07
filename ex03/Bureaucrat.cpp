#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat :: Bureaucrat(const std :: string name, int grade) :name(name)
{
    try
    {
        if (grade > 150)
            throw (name);
        else if (grade < 1)
            throw (grade);
        this->grade = grade;
        std :: cout << this->name << " le bureaucrat a ete cree de grade : " \
        << this->grade << std :: endl;
    }
    catch (int grade)
    {
        std :: cout << "Bureaucrat::GradeTooHighException" << std :: endl;
    }
    catch (std :: string name)
    {
        std :: cout << "Bureaucrat::GradeTooLowException." << std :: endl;
    }

}

Bureaucrat :: ~Bureaucrat()
{
    std :: cout << "le bureaucrat est mort" \
    << std :: endl;
}

Bureaucrat :: Bureaucrat(const Bureaucrat &src)
{
    std :: cout << "copy constructor called" << std :: endl;
    *this = src;
}

Bureaucrat &Bureaucrat :: operator=(const Bureaucrat &src)
{
    if (this != &src)
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
    std :: string error = "404";
    int num_error = 404;
    try
    {
        if ((this->grade - 1) > 150)
            throw (error);
        else if ((this->grade - 1) < 1)
            throw (num_error);
        this->grade = this->grade - 1;
        std :: cout << this->name << " : j'ai un nouveau grade " \
        << this->grade << std :: endl;
    }
    catch (int num_error)
    {
        std :: cout << "Bureaucrat::GradeTooHighException." << std :: endl;
    }
    catch(std :: string error)
    {
        std :: cout << "Bureaucrat::GradeTooLowException." << std :: endl;
    }
}

void Bureaucrat :: grade_decremente()
{
    std :: string error = "404";
    int num_error = 404;
    try
    {
        if ((this->grade + 1) > 150)
            throw (num_error);
        else if ((this->grade + 1) < 1)
            throw (error);
        this->grade = this->grade + 1;
        std :: cout << this->name << " : j'ai un nouveau grade " \
        << this->grade << std :: endl;
    }
    catch (int num_error)
    {
        std :: cout << "Bureaucrat::GradeTooHighException." << std :: endl;
    }
    catch(std :: string error)
    {
        std :: cout << "Bureaucrat::GradeTooLowException." << std :: endl;
    }
}

void Bureaucrat :: signForm(bool signature)
{
    if (signature)
        std :: cout << "bureaucrat signed form" << std :: endl;
    else 
        std :: cout << "bureaucrat couldn't sign form" << std :: endl;
}


void Bureaucrat :: executeForm(Form const & form)
{
    if (getGrade() <= form.get_gardeExec())
    {
       std :: cout << getName() << "executed " << form.get_name() << std :: endl;
    }
    else
        std :: cout << getName() << "d'ont execute " << form.get_name() << std :: endl;
}

std :: ostream &operator<<(std :: ostream &o, Bureaucrat const &src)
{
    o << src.getName() << " de grade : " << src.getGrade() << std :: endl; 
    return(o);
}