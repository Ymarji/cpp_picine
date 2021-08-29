#include "Character.hpp"

Character::Character():
_Name("D"),
_AMnum(0){
    InitInv();
}

Character::Character(std::string Name):
_Name(Name),
_AMnum(0){
    InitInv();
}

Character::Character(Character const & rhs){
    this->_AMnum = rhs._AMnum;
    this->_Name = rhs._Name;
    DestroyInv();
    for (int i = 0; i < this->_AMnum; i++)
    {
        this->_Inventory[i] = rhs._Inventory[i]->clone();
    }
}

Character& Character::operator= (Character const &rhs){
    this->_AMnum = rhs._AMnum;
    this->_Name = rhs._Name;
    DestroyInv();
    for (int i = 0; i < this->_AMnum; i++)
    {
        this->_Inventory[i] = rhs._Inventory[i]->clone();
    }
    return *(this);
}

void	Character::InitInv(){
    for (int i = 0; i < 4; i++)
    {
        this->_Inventory[i] = NULL;
    }
}

void Character::DestroyInv(){
    for (int i = 0; i < this->_AMnum; i++)
    {
        delete this->_Inventory[i];
        this->_Inventory[i] = NULL;
    }
}

std::string const & Character::getName() const{
    return (this->_Name);
}

void Character::equip(AMateria* m){
    if(m && _AMnum < 4)
    {
        this->_Inventory[_AMnum++] = m;
    }
    else if (!m)
		std::cout << "Materia Equipe failed" << std::endl;
    else
        std::cout << "Inventory Full" << std::endl;
}

void Character::unequip(int idx){
    if (idx >= 0 && idx < _AMnum)
    {
        this->_Inventory[idx] = NULL;
        for(int i = idx;i < _AMnum-1; i++)
        {
            _Inventory[i] = _Inventory[i + 1];
        }
        _AMnum--;
    }
    else
        std::cout << "Invalid index" << std::endl;
}

void Character::use(int idx, ICharacter& target){
    if (idx >= 0 && idx < _AMnum)
        _Inventory[idx]->use(target);
    else
        std::cout << "invalid index" << std::endl;
}

Character::~Character(){
    DestroyInv();
}