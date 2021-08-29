#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
class Character: public ICharacter
{
	public:
		Character();
		Character(std::string);
		Character(Character const &);
		Character& operator= (Character const &);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		void	DestroyInv();
		void	InitInv();
		~Character();
	private:
        std::string _Name;
        AMateria *_Inventory[4];
        int		_AMnum;
};

#endif
