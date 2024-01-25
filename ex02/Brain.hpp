#pragma once
#include <iostream>

class Brain
{
private:
	std::string	_ideas[101];
	static bool	_seed;

public:
	Brain();
	// Brain( /*arg*/ );
	Brain( Brain const & src );
	~Brain();

	Brain & operator=( Brain const & rhs );
	int			_idea;

};

std::ostream & operator<<( std::ostream & o, Brain const & rhs);
