#pragma once
#include <iostream>
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
private:
	//variable

public:
	WrongDog();
	// Dog( /*arg*/ );
	// Dog( Dog const & src );
	~WrongDog();

	WrongDog & operator=( WrongDog const & rhs );
	void	makeSound() const;
};

std::ostream & operator<<( std::ostream & o, WrongDog const & rhs);
