#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() {
	this->_type = "cure";
	std::cout << "cure" << std::endl;
}
// Cure::Cure( /*arg*/ ) {
// 	std::cout << "cure" << std::endl;
// }
// Cure::Cure( Cure const & src ) {
// 	std::cout << "cure" << std::endl;
// }
Cure::~Cure() {
	std::cout << "cure" << std::endl;
}

AMateria* Cure::clone() const{
	return (new Cure());
}
void	Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName()<< "'s wounds *"<< std::endl;
}

// Cure & Cure::operator=( Cure const & rhs ) {
	
// }
// std::ostream & operator<<( std::ostream & o, Cure const & rhs) {
// 	o << rhs.getName();
// 	return o;
// }
