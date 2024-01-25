#include "Brain.hpp"
#include "../mycolor.hpp"
#include <string>
#include <cstdlib>

bool Brain::_seed = false;

Brain::Brain() {
	int i = 0;
	if (!this->_seed)
	{
		srand((unsigned) time(NULL));
		this->_seed = true;
	}
	while (i < 100)
	{
		this->_ideas[i] = std::to_string(i);
		i++;
	}
	this->_idea = rand() % 100;
	std::cout << FG_GREEN" my idea is number "<< this->_ideas[_idea] << FG_DEFAULT<< std::endl;
}
// Brain::Brain( /*arg*/ ) {
// 	std::cout << " my idea is number " << this->_ideas[_idea] << std::endl;
// }
Brain::Brain( Brain const & src ) {
	int i = 0;
	while (i < 100)
	{
		this->_ideas[i] = std::to_string(i);
		i++;
	}
	this->_idea = src._idea;
	std::cout << FG_GREEN" my idea is number "<< this->_ideas[_idea] << FG_DEFAULT<< std::endl;
}
Brain::~Brain() {
	std::cout << FG_LRED" my idea was number " << this->_ideas[_idea] << FG_DEFAULT<< std::endl;
}

Brain & Brain::operator=( Brain const & rhs ) {
	this->_idea = rhs._idea;
	return *this;
}
// std::ostream & operator<<( std::ostream & o, Brain const & rhs) {
// 	o << rhs.getName();
// 	return o;
// }

