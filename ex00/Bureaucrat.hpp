#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <ostream>
#include <iostream>
#include <string>


class Bureaucrat
{
    private:
        const std :: string name;
        unsigned int grade;
    public:
        Bureaucrat(); 
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat &operator=(const Bureaucrat &src);
        std :: string getName() const;
        void grade_incremente();
        void grade_decremente();
        int getGrade()const;
        class GradeTooLowException : public std::exception
	    {
		    const char *what() const throw ();
	    };
	    class GradeTooHighException : public std::exception
	    {
		    const char *what() const throw ();
	    };
};

std :: ostream& operator<<(std :: ostream & o, const Bureaucrat&src);

#endif