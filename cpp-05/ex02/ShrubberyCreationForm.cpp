/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:35:01 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/22 22:35:28 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery creation", "empty", 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery creation", target, 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form(other) {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) 
{
	Form::operator = (other);
	
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)  const
{
	std::ofstream out;
	Form::execute(executor);

	out.open(Form::getTarget()+"_shrubbery");
	std::string tree = "                                              .\n\
                                   .         ;\n\
      .              .              ;%     ;;\n\
        ,           ,                :;%  %;\n\
         :         ;                   :;%;'     .,\n\
,.        %;     %;            ;        %;'    ,;\n\
  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n\
    ;%;      %;        ;%;        % ;%;  ,%;'\n\
     `%;.     ;%;     %;'         `;%%;.%;'\n\
      `:;%.    ;%%. %@;        %; ;@%;%'\n\
         `:%;.  :;bd%;          %;@%;'\n\
           `@%:.  :;%.         ;@@%;'\n\
             `@%.  `;@%.      ;@@%;\n\
               `@%%. `@%%    ;@@%;\n\
                 ;@%. :@%%  %@@%;\n\
                   %@bd%%%bd%%:;\n\
                     #@%%%%%:;;\n\
                     %@@%%%::;\n\
                     %@@@%(o);  . '\n\
                     %@@@o%;:(.,'\n\
                 `.. %@@@o%::;\n\
                    `)@@@o%::;\n\
                     %@@(o)::;\n\
                    .%@@@@%::;\n\
                    ;%@@@@%::;.\n\
                   ;%@@@@%%:;;;.\n\
               ...;%@@@@@%%:;;;;,..    Gilo97\n";
	out << tree;
	out.close();
}