#include "Animal.hpp"
#include "../mycolor.hpp"

Animal::Animal() : _type(""){
	std::cout << FG_GREEN "A new animal arrived" FG_DEFAULT << std::endl; 
}
// Animal::Animal( /*arg*/ ) {
// 	std::cout << FG_GREEN "A new animal arrived" FG_DEFAULT << std::endl; 
// }
// Animal::Animal( Animal const & src ) {
// 	std::cout << FG_GREEN "A new animal arrived" FG_DEFAULT << std::endl; 
// }
Animal::~Animal() {
	std::cout << FG_LRED "a old animal is leaving" FG_DEFAULT << std::endl;
}

Animal & Animal::operator=( Animal const & rhs ) {
	this->_type = rhs.getType();
	return (*this);
}

std::string Animal::getType() const{
	return (this->_type);
}

void Animal::setType(std::string type) {
	this->_type = type;
}

void Animal::makeSound() const {
	std::cout << FG_LMAGENTA "SOUND!!" FG_DEFAULT << std::endl;
}

std::ostream & operator<<( std::ostream & o, Animal const & rhs) {
	o << rhs.getType() << " adres this :: "<< &rhs << " adres brain :: " << rhs.getBrain();
	return o;
}

Brain * Animal::getBrain() const{
	return (nullptr);
}
