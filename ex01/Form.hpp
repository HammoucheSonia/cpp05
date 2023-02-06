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
        bool beSigned(Bureaucrat un_bureaucrat);
        std :: string get_name();
        int get_gardeExec();
        int get_gradeSigned();
        void affiche();
};

std :: ostream& operator<<(std :: ostream & o, const Form&src);