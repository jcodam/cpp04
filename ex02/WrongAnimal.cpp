#include "WrongAnimal.hpp"
#include "../mycolor.hpp"

WrongAnimal::WrongAnimal() : _type(""){
	std::cout << FG_GREEN "A new animal arrived" FG_DEFAULT << std::endl; 
}
// WrongAnimal::WrongAnimal( /*arg*/ ) {
// 	std::cout << FG_GREEN "A new animal arrived" FG_DEFAULT << std::endl; 
// }
// WrongAnimal::WrongAnimal( WrongAnimal const & src ) {
// 	std::cout << FG_GREEN "A new animal arrived" FG_DEFAULT << std::endl; 
// }
WrongAnimal::~WrongAnimal() {
	std::cout << FG_LRED "a old animal is leaving" FG_DEFAULT << std::endl;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs ) {
	this->_type = rhs.getType();
	return (*this);
}

std::string WrongAnimal::getType() const{
	return (this->_type);
}

void WrongAnimal::setType(std::string type) {
	this->_type = type;
}

void WrongAnimal::makeSound() const {
	std::cout << FG_LMAGENTA "SOUND!!" FG_DEFAULT << std::endl;
}

std::ostream & operator<<( std::ostream & o, WrongAnimal const & rhs) {
	o << rhs.getType();
	return o;
}
