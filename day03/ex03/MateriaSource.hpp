#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &);
        MateriaSource& operator=(MateriaSource const &);

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);

        void	DestroyInv();
        void    InitInv();
        
        ~MateriaSource();
    private:
        int      _AMnum;
        AMateria *_MatMemo[4];
};

#endif
