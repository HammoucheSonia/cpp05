#ifndef FORM_HPP
#define FORM_HPP
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
        Form(std :: string const name,const int grade_signed, const int grade_exec);
        ~Form();
        Form(const Form &src);
        Form &operator=(const Form &src);
        bool beSigned(Bureaucrat un_bureaucrat);
        std :: string get_name() const;
        virtual int get_gardeExec() const;
        int get_gradeSigned();
        void affiche();
        virtual void execute(Bureaucrat const & executor)const = 0;
};

std :: ostream& operator<<(std :: ostream & o, const Form&src);


#endif