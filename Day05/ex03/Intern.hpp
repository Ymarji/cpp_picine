#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
    private:
        Form	*creatFormShBnerry(std::string Target);
        Form	*creatFormPesPardon(std::string Target);
        Form	*creatFormRoboot(std::string Target);
    public:
        Intern();
        Intern(Intern const &rhs);
        Intern & operator=(Intern const &);


        Form	*makeForm(std::string Name, std::string Target);
        ~Intern();
};

#endif /* INTERN_HPP */
