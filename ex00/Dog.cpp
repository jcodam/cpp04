#include "Dog.hpp"
#include "../mycolor.hpp"

Dog::Dog() {
	this->_type = "dog";
	std::cout << FG_GREEN "a new dog is running" FG_DEFAULT << std::endl;
}
// Dog::Dog( /*arg*/ ) {
// 	std::cout << ""<< std::endl;
// }
// Dog::Dog( Dog const & src ) {
// 	std::cout << ""<< std::endl;
// }
Dog::~Dog() {
	std::cout << FG_LRED "a dog is running away" FG_DEFAULT << std::endl;
}

Dog & Dog::operator=( Dog const & rhs ) {
	this->_type = rhs.getType();
	return (*this);
}

void Dog::makeSound() const {
	std::cout << FG_LMAGENTA "WAFF!!" FG_DEFAULT << std::endl;
}

std::ostream & operator<<( std::ostream & o, Dog const & rhs) {
	o << rhs.getType();
	return o;
}
