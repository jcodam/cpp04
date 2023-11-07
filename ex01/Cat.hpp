#pragma once
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *_brain;

public:
	Cat();
	// Cat( /*arg*/ );
	Cat( Cat const & src );
	virtual ~Cat();

	Cat & operator=( Cat const & rhs );
	virtual void	makeSound() const;
	Brain * getBrain() const;

};

std::ostream & operator<<( std::ostream & o, Cat const & rhs);
