#include "Dog.hpp"
#include "../mycolor.hpp"

Dog::Dog() {
	this->_type = "dog";
	this->_brain = new Brain;
	std::cout << FG_GREEN "a new dog is running" FG_DEFAULT << std::endl;
}
// Dog::Dog( /*arg*/ ) {
// 	std::cout << ""<< std::endl;
// }
Dog::Dog( Dog const & src ) {
	this->_brain = new Brain(*src.getBrain());
	this->_type = src.getType();
	std::cout << FG_GREEN "a same dog is running" FG_DEFAULT << std::endl;
}
Dog::~Dog() {
	delete this->_brain;
	std::cout << FG_LRED "a dog is running away" FG_DEFAULT << std::endl;
}

Brain * Dog::getBrain() const{
	return (this->_brain);
}


Dog & Dog::operator=( Dog const & rhs ) {
	*this->_brain = *rhs.getBrain();
	this->_type = rhs.getType();
	return (*this);
}

void Dog::makeSound() const {
	std::cout << FG_LMAGENTA "WAFF!!" FG_DEFAULT << std::endl;
}

std::ostream & operator<<( std::ostream & o, Dog const & rhs) {
	o << rhs.getType() << "adres this :: "<< &rhs << "adres brain :: " << rhs.getBrain();
	return o;
}
