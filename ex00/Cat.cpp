#include "Cat.hpp"
#include "../mycolor.hpp"

Cat::Cat() {
	this->_type = "Cat";
	std::cout << FG_GREEN"a cat is jumping out of its hiding hole" FG_DEFAULT << std::endl;
}
// Cat::Cat( /*arg*/ ) {
// 	std::cout << "" << srd::endl;
// }
// Cat::Cat( Cat const & src ) {
// 	std::cout << "" << srd::endl;
// }
Cat::~Cat() {
	std::cout << FG_LRED "a cat is gone" FG_DEFAULT << std::endl;
}

Cat & Cat::operator=( Cat const & rhs ) {
	this->_type = rhs.getType();
	return (*this);
}

void Cat::makeSound() const{
	std::cout << FG_LMAGENTA "MOUWww!!" FG_DEFAULT << std::endl;
}

std::ostream & operator<<( std::ostream & o, Cat const & rhs) {
	o << rhs.getType();
	return o;
}
