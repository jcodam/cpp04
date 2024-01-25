#pragma once
#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_slots[4];

public:
	MateriaSource();
	// MateriaSource( /*arg*/ );
	// MateriaSource( MateriaSource const & src );
	~MateriaSource();

	// virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const & type);
	// MateriaSource & operator=( MateriaSource const & rhs );

};

// std::ostream & operator<<( std::ostream & o, MateriaSource const & rhs);
