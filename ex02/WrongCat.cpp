#include "WrongCat.hpp"
#include "../mycolor.hpp"

WrongCat::WrongCat() {
	this->_type = "WrongCat";
	std::cout << FG_GREEN"a cat is jumping out of its hiding hole" FG_DEFAULT << std::endl;
}
// WrongCat::WrongCat( /*arg*/ ) {
// 	std::cout << "" << srd::endl;
// }
// WrongCat::WrongCat( WrongCat const & src ) {
// 	std::cout << "" << srd::endl;
// }
WrongCat::~WrongCat() {
	std::cout << FG_LRED "a cat is gone" FG_DEFAULT << std::endl;
}

WrongCat & WrongCat::operator=( WrongCat const & rhs ) {
	this->_type = rhs.getType();
	return (*this);
}

void WrongCat::makeSound() const{
	std::cout << FG_LMAGENTA "MOUWww!!" FG_DEFAULT << std::endl;
}

std::ostream & operator<<( std::ostream & o, WrongCat const & rhs) {
	o << rhs.getType();
	return o;
}
