#include "Ice.hpp"

Ice::Ice():AMateria("ice"){
}

Ice::Ice(Ice const & rhs):AMateria(rhs){
}

Ice& Ice::operator=(Ice const & rhs){
    this->AMateria::operator=(rhs);
    return *this;
}

AMateria* Ice::clone() const{
    AMateria *Mat = new Ice(*this);
    if(!Mat)
    {
        std::cout << "Can't clone this Ice, memory allocation failed!" << std::endl;
        std::exit(1);
    }
    return (Mat);
}

void Ice::use(ICharacter& target){
    std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}

Ice::~Ice(){
}