#include "Character.hpp"
#include <cstring>

// Character::Character() {
// 	std::cout << "char" << std::endl;
// }
Character::Character( std::string name ) {
	this->_name = name;
	for (size_t i = 0; i < 4; i++)
	{
		this->_slots[i] = 0;
	}
	this->floor = 0;
	this->size_floor = 0;
	
	std::cout << "make char " << this->_name << std::endl;
}
// Character::Character( Character const & src ) {
// 	std::cout << "char" << std::endl;
// }
Character::~Character() {
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_slots[i])
			delete this->_slots[i];
		this->_slots[i] = 0;
	}
	for (int i = 0; i < this->size_floor; i++)
	{
		// if (this->_slots[i])
			delete this->floor[i];
		// this->_slots[i] = 0;
	}
	if (this->size_floor)
		delete[] this->floor;
	std::cout << "del char "<< this->_name << std::endl;
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
	if (idx >= 0 && idx < 4 && this->_slots[idx]){

		AMateria **tmpfloor = new AMateria*[this->size_floor + 1];
		if (this->size_floor){
			memcpy(tmpfloor, this->floor, this->size_floor * sizeof(AMateria*));
			delete[] this->floor;
		}
		this->floor = tmpfloor;
		this->floor[this->size_floor] = this->_slots[idx];
		this->_slots[idx] = 0;
		this->size_floor++;
	}
}
void Character::use(int idx, ICharacter& target){
	if (idx < 4 && idx >= 0 && this->_slots[idx])
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
