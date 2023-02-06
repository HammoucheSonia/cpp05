#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <ostream>
#include <iostream>

class Form;

class Bureaucrat
{
    private:
        const std :: string name;
        int grade;
    public:
        Bureaucrat(std :: string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat &operator=(const Bureaucrat &src);
        std :: string getName() const;
        void grade_incremente();
        void grade_decremente();
        int getGrade()const;
        void signForm(bool signature);
        void executeForm(Form const & form);
};

std :: ostream& operator<<(std :: ostream & o, const Bureaucrat&src);

#endif