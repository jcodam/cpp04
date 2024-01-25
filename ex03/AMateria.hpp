#pragma once
#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
protected:
	std::string _type;

public:
	AMateria(){};
	// [...]
	std::string const & getType() const{return (this->_type);}; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
};

