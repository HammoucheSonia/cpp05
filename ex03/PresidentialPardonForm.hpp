#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"


class PresidentialPardonForm : public Form
{
    private:
        std :: string target;
    public : 
        PresidentialPardonForm(std :: string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &other);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
        virtual void execute(Bureaucrat const & executor)const;
};

#endif 