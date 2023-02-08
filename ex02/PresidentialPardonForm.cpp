#include "PresidentialPardonForm.hpp"

PresidentialPardonForm :: PresidentialPardonForm(const std :: string target)\
: Form("residential Pardon", 25, 5), target(target)
{
    std :: cout << "PresidentialPardonForm a ete cree" <<  std :: endl;
}

PresidentialPardonForm :: ~PresidentialPardonForm()
{
    std :: cout << "PresidentialPardonForm est mort" << std :: endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) 
    : Form(other) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
    Form::operator=(other);
    return (*this);
}

void PresidentialPardonForm :: execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() <= get_gardeExec())
    {
        std :: cout << "je vous informe que " << this->target << \
        " a été pardonnée par Zaphod Beeblebrox" << std :: endl;
    }
    else
    {
        std :: cout << "je peux pas excecuter ce formulaire" << std :: endl;
    }
}
