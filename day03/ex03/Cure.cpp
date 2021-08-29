#include "Cure.hpp"

Cure::Cure():AMateria("cure"){
}

Cure::Cure(Cure const & rhs):AMateria(rhs){
}

Cure& Cure::operator=(Cure const & rhs){
    this->AMateria::operator=(rhs);
    return *this;
}

AMateria* Cure::clone() const{
    AMateria *Mat = new Cure(*this);
    if(!Mat)
    {
        std::cout << "Can't clone this Cure, memory allocation failed!" << std::endl;
        std::exit(1);
    }
    return (Mat);
}

void Cure::use(ICharacter& target){
    std::cout << "heals " << target.getName() << std::endl;
}

Cure::~Cure(){
}