#pragma once
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *_brain;

public:
	Dog();
	// Dog( /*arg*/ );
	Dog( Dog const & src );
	virtual ~Dog();

	Dog & operator=( Dog const & rhs );
	virtual void	makeSound() const;
	Brain * getBrain() const;

};

std::ostream & operator<<( std::ostream & o, Dog const & rhs);
