#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Bureaucrat.hpp"

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private :
        std :: string target;
    public: 
        RobotomyRequestForm(std :: string target);
        ~RobotomyRequestForm();
        virtual void execute(Bureaucrat const & executor)const;
};

#endif