#include "Cat.hpp"
#include "../mycolor.hpp"

Cat::Cat() {
	this->_type = "Cat";
	this->_brain = new Brain;
	std::cout << FG_GREEN"a cat is jumping out of its hiding hole" FG_DEFAULT << std::endl;
}

Cat::Cat( Cat const & src ) {
	this->_brain = new Brain(*src.getBrain());
	this->_type = src.getType();
	std::cout << FG_GREEN"the same cat is jumping out of its hiding hole" FG_DEFAULT << std::endl;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << FG_LRED "a cat is gone" FG_DEFAULT << std::endl;
}

Brain * Cat::getBrain() const{
	return (this->_brain);
}


Cat & Cat::operator=( Cat const & rhs ) {
	*this->_brain = *rhs.getBrain();
	this->_type = rhs.getType();
	return (*this);
}

void Cat::makeSound() const{
	std::cout << FG_LMAGENTA "MOUWww!!" FG_DEFAULT << std::endl;
}

std::ostream & operator<<( std::ostream & o, Cat const & rhs) {
	o << rhs.getType() << "adres this :: "<< &rhs << "adres brain :: " << rhs.getBrain();
	return o;
}
