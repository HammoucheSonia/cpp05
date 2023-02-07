#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private :
        std :: string target;
    public: 
        ShrubberyCreationForm(std :: string target);
        ~ShrubberyCreationForm();
        virtual void execute(Bureaucrat const & executor)const;
};

#endif