#pragma once
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	//variable

public:
	WrongCat();
	// Cat( /*arg*/ );
	// Cat( Cat const & src );
	~WrongCat();

	WrongCat & operator=( WrongCat const & rhs );
	void	makeSound() const;
};

std::ostream & operator<<( std::ostream & o, WrongCat const & rhs);
