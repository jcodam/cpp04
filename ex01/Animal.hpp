#pragma once
#include <iostream>
#include "Brain.hpp"

class Animal
{
private:

protected:
	std::string _type;

public:
	Animal();
	// Animal( /*arg*/ );
	// Animal( Animal const & src );
	virtual ~Animal();

	virtual Animal & operator=( Animal const & rhs );
	std::string	getType() const;
	virtual Brain *	getBrain() const;
	void		setType(std::string type);
	virtual void		makeSound() const;

};

std::ostream & operator<<( std::ostream & o, Animal const & rhs);
