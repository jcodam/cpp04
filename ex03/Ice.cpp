#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() {
	this->_type = "ice";
	std::cout << "ice" << std::endl;
}
// Ice::Ice( /*arg*/ ) {
// 	std::cout << "ice" << std::endl;
// }
// Ice::Ice( Ice const & src ) {
// 	std::cout << "ice" << std::endl;
// }
Ice::~Ice() {
	std::cout << "ice" << std::endl;
}

AMateria* Ice::clone() const{
	return (new Ice());
}
void	Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName()<< " *"<< std::endl;
}

// Ice & Ice::operator=( Ice const & rhs ) {
	
// }
// std::ostream & operator<<( std::ostream & o, Ice const & rhs) {
// 	o << rhs.getName();
// 	return o;
// }