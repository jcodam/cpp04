#pragma once
#include <iostream>
#include "ICharacter.hpp"


class Character : public ICharacter
{
private:
	std::string _name;
	AMateria	*_slots[4];
	AMateria	**floor;
	int			size_floor;

public:
	// Character();
	Character( std::string name );
	// Character( Character const & src );
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	// Character & operator=( Character const & rhs );

};

// std::ostream & operator<<( std::ostream & o, Character const & rhs);
