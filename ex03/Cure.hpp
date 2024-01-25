#pragma once
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	//variable

public:
	Cure();
	// Cure( /*arg*/ );
	// Cure( Cure const & src );
	~Cure();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
	// Cure & operator=( Cure const & rhs );

};

// std::ostream & operator<<( std::ostream & o, Cure const & rhs);
