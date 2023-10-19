#pragma once
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
private:
	//variable

public:
	Dog();
	// Dog( /*arg*/ );
	// Dog( Dog const & src );
	virtual ~Dog();

	Dog & operator=( Dog const & rhs );
	virtual void	makeSound() const;
};

std::ostream & operator<<( std::ostream & o, Dog const & rhs);
