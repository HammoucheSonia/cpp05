#include "ShrubberyCreationForm.hpp"
#include <fstream>  

ShrubberyCreationForm :: ShrubberyCreationForm(const std :: string target)\
: Form("ShrubberyCreationForm", 145, 137), target(target)
{
    std :: cout << "ShrubberyCreationForm a ete cree" <<  std :: endl;
}

ShrubberyCreationForm :: ~ShrubberyCreationForm()
{
    std :: cout << "ShrubberyCreationForm est mort" << std :: endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) 
    : Form(other) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    Form::operator=(other);
    return (*this);
}

void ShrubberyCreationForm :: execute(Bureaucrat const & executor) const
{
    if (executor.getGrade()<= get_gardeExec())
    {
        std :: string file_name = this->target;
        std :: ofstream o(file_name.append("_shrubbery").c_str());
        std :: ofstream fichier(file_name.c_str(), std :: ios::out | std :: ios::trunc);
        std :: string  new_text = \
    "\
          � \n\
         ��� \n\
        ����� \n\
       ������� \n\
      ��������� \n\
     ����������� \n\
    ������������� \n\
   ��������������� \n\
  ����������������� \n\
 ������������������� \n\
         ���� \n\
         ���� \n\
         ���� \n\
         ���� \n";
        if(fichier)
            fichier << new_text;
        fichier.close();
    }
    else
    {
        std :: cout << "je peux pas excecuter ce formulaire" << std :: endl;
    }

}