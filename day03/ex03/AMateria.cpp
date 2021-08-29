#include "AMateria.hpp"

AMateria::AMateria(){
    return ;
}

AMateria::AMateria(std::string const & type):_type(type){
}

AMateria::AMateria(AMateria const & rhs):_type(rhs._type){
}

AMateria& AMateria::operator=(AMateria const &rhs){
    this->_type = rhs._type;
    return *(this);
}

std::string const & AMateria::getType() const{
    return this->_type;
}

AMateria::~AMateria(){
}
