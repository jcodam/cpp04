#pragma once
#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
private:
	//variable

public:
	Ice();
	// Ice( /*arg*/ );
	// Ice( Ice const & src );
	~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
	// Ice & operator=( Ice const & rhs );

};

// std::ostream & operator<<( std::ostream & o, Ice const & rhs);
