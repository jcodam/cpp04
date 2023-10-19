#pragma once
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
private:
	//variable

public:
	Cat();
	// Cat( /*arg*/ );
	// Cat( Cat const & src );
	virtual ~Cat();

	Cat & operator=( Cat const & rhs );
	virtual void	makeSound() const;
};

std::ostream & operator<<( std::ostream & o, Cat const & rhs);
