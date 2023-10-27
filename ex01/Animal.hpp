#pragma once
#include <iostream>

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

	Animal & operator=( Animal const & rhs );
	std::string	getType() const;
	void		setType(std::string type);
	virtual void		makeSound() const;

};

std::ostream & operator<<( std::ostream & o, Animal const & rhs);
