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
        RobotomyRequestForm(const RobotomyRequestForm &other);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
        virtual void execute(Bureaucrat const & executor)const;
};

#endif