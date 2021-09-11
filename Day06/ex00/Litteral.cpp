#include "Litteral.hpp"

Litteral::Litteral(){
    return ;
}
Litteral::Litteral(char * arg):_arg(arg), _pres(0){
    return ;
}
Litteral::Litteral(Litteral const &rhs){
    *this = rhs;
}
Litteral &Litteral::operator=(Litteral const &rhs){
    this->_arg = rhs._arg;
    this->_c = rhs._c;
    this->_nI = rhs._nI;
    this->_nD= rhs._nD;
    this->_nF = rhs._nF;
    this->_type = rhs._type;
    this->_pres = rhs._pres;
    return (*this);
}


void    Litteral::checkArg(){
    int len(std::strlen(_arg));
    std::string str = _arg;
    int dotCp(0);
    int alphaCp(0);
    for (int i = 0; i < len; i++)
    {
        if (len == 1)
            if(!std::isdigit(_arg[i]))
            {
                _type = CHART;
                return ;
            }
        if (_arg[i] == '.'){
            dotCp++;
            if (_arg[i + 1] == '\0' || _arg[i + 1] == 'f'){
                _type = 0;
                return ;
            }
        }
        else if (!std::isdigit(_arg[i]))
            alphaCp++;
    }
    if (dotCp > 1){
        _type = 0;
        return ;
    }
    if ((alphaCp == 1 && _arg[len - 1] == 'f') || (str == "nanf" || str == "-inff" || str == "+inff")){
        _pres = str.length() - str.find('.') - 2;
        _type = FLOATT;
        return ;
    }
    if ((dotCp == 1 && alphaCp == 0) || (str == "nan" || str == "-inf" || str == "+inf")){
        _pres = str.length() - str.find('.') - 1;
        _type = DOUBLET;
        return ;
    }
    if (dotCp == 0 && alphaCp == 0){
        _type = INTT;
        return ;
    }
    _type = 0;
}

void Litteral::argToChar(){
    if (_type == CHART)
        _c = _arg[0];
    _nI = _c;
    _nD = _c;
    _nI = _c;
}

void Litteral::argToInt(){
    if (_type == INTT)
        _nI = std::atoi(_arg);
    _c = static_cast<char>(_nI);
    _nD = _nI;
    _nF = _nI;
}
void Litteral::argToDouble(){
    if (_type == DOUBLET)
        _nD = std::atof(_arg);
    _c = static_cast<char>(_nD);
    _nI = static_cast<int>(_nD);
    _nF = static_cast<float>(_nD);
}
void Litteral::argToFloat(){
    if (_type == FLOATT){
        _arg[std::strlen(_arg) - 1] = '\0';
        _nF = std::atof(_arg);
    }
    _c = static_cast<char>(_nF);
    _nI = static_cast<int>(_nF);
    _nD = static_cast<double>(_nF);
}

void    Litteral::printArg(){
    if (_type == 0)
    {
        std::cout << "<<<<  invaliD Arg  >>>>>" << std::endl;
        return ;
    }
    std::cout << "char: ";
    if (!std::strcmp(_arg, "nan") || !std::strcmp(_arg, "-inf") || !std::strcmp(_arg, "+inf"))
        std::cout << "Impossible" << std::endl;
    else if (!std::isprint(_c))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << _c << std::endl;
    std::cout << "Int: ";
    if (!std::strcmp(_arg, "nan") || !std::strcmp(_arg, "-inf") || !std::strcmp(_arg, "+inf"))
        std::cout << "Impossible" << std::endl;
    else
        std::cout << _nI << std::endl;
    std::cout << "Float: ";
    if (_type == INTT || _type == CHART)
        std::cout << std::fixed << std::setprecision(_pres + 1) <<_nD << "f" <<std::endl;
    else
        std::cout << std::fixed << std::setprecision(_pres) <<_nD << "f" <<std::endl;
    std::cout << "Double: ";
    if (_type == INTT || _type == CHART)
        std::cout << std::fixed << std::setprecision(_pres + 1) <<_nD <<std::endl;
    else
        std::cout << std::fixed << std::setprecision(_pres) <<_nD <<std::endl;
}

Litteral::~Litteral(){
    return ;
}