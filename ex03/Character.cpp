#include "Character.hpp"

// Character::Character() {
// 	std::cout << "char" << std::endl;
// }
Character::Character( std::string name ) {
	this->_name = name;
	for (size_t i = 0; i < 4; i++)
	{
		this->_slots[i] = 0;
	}
	
	std::cout << "char" << std::endl;
}
// Character::Character( Character const & src ) {
// 	std::cout << "char" << std::endl;
// }
Character::~Character() {
	std::cout << "char" << std::endl;
}

std::string const & Character::getName() const{
	return(this->_name);
}
void Character::equip(AMateria* m){
	bool use = false;
	for (size_t i = 0; i < 4; i++)
	{
		if (!this->_slots[i] && !use)
		{
			use = true;
			this->_slots[i] = m;
		}
	}
	
}
void Character::unequip(int idx){
	if (idx < 4)
	{
		this->_slots[idx] = 0;
	}
}
void Character::use(int idx, ICharacter& target){
	if (idx < 4)
	{
		this->_slots[idx]->use(target);
	}
	else
		std::cout << "expand your inventory" << std::endl;
}
// Character & Character::operator=( Character const & rhs ) {
	
// }
// std::ostream & operator<<( std::ostream & o, Character const & rhs) {
// 	o << rhs.getName();
// 	return o;
// }
