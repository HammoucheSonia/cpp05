#include "Bureaucrat.hpp"
#include <ostream>
#include <iostream>


class Form 
{
    private:
        std :: string const name;
        bool signe;
        const int grade_signed;
        const int grade_exec;
    public:
        Form();
        Form(std :: string const name,const int grade_signed, const int grade_exec);
        ~Form();
        Form( const Form& src );
        Form&   operator=( const Form& rhs );
        void beSigned(Bureaucrat &un_bureaucrat);
        std :: string get_name() const;
        int get_gardeExec() const ;
        int get_gradeSigned() const;
        bool getSigned() const;
        void affiche();
        class GradeTooHighException : public std::exception {
	    public:
		    virtual const char*	what( void ) const throw();
	    };

	    class GradeTooLowException : public std::exception {
	    public:
		    virtual const char*	what( void ) const throw();
	    };
};

std::ostream& operator<<(std::ostream &out, const Form &form);