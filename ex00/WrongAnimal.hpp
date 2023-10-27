#pragma once
#include <iostream>

class WrongAnimal
{
private:

protected:
	std::string _type;

public:
	WrongAnimal();
	// Animal( /*arg*/ );
	// Animal( Animal const & src );
	~WrongAnimal();

	WrongAnimal & operator=( WrongAnimal const & rhs );
	std::string	getType() const;
	void		setType(std::string type);
	void		makeSound() const;

};

std::ostream & operator<<( std::ostream & o, WrongAnimal const & rhs);
