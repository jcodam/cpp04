#include "WrongDog.hpp"
#include "../mycolor.hpp"

WrongDog::WrongDog() {
	this->_type = "dog";
	std::cout << FG_GREEN "a new dog is running" FG_DEFAULT << std::endl;
}
// WrongDog::WrongDog( /*arg*/ ) {
// 	std::cout << ""<< std::endl;
// }
// WrongDog::WrongDog( WrongDog const & src ) {
// 	std::cout << ""<< std::endl;
// }
WrongDog::~WrongDog() {
	std::cout << FG_LRED "a dog is running away" FG_DEFAULT << std::endl;
}

WrongDog & WrongDog::operator=( WrongDog const & rhs ) {
	this->_type = rhs.getType();
	return (*this);
}

void WrongDog::makeSound() const {
	std::cout << FG_LMAGENTA "WAFF!!" FG_DEFAULT << std::endl;
}

std::ostream & operator<<( std::ostream & o, WrongDog const & rhs) {
	o << rhs.getType();
	return o;
}
