#include "RobotomyRequestForm.hpp"

RobotomyRequestForm :: RobotomyRequestForm(const std :: string target)\
: Form("Robotomy Request", 72, 45), target(target)
{
    std :: cout << "RobotomyRequestForm a ete cree" <<  std :: endl;
}

RobotomyRequestForm :: ~RobotomyRequestForm()
{
    std :: cout << "RobotomyRequestForm est mort" << std :: endl;
}



void RobotomyRequestForm :: execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() <= get_gardeExec())
    {
        std :: cout << "je vous informe que " << this->target << \
        " robotomisée avec succès 50% du temps" << std :: endl;
    }
    else
    {
        std :: cout << "je peux pas excecuter ce formulaire" << std :: endl;
    }
}
