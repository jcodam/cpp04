#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (size_t i = 0; i < 4; i++)
	{
		this->_slots[i] = 0;
	}
	std::cout << "source" << std::endl;
}
// MateriaSource::MateriaSource(  ) {
// 	std::cout << "source" << std::endl;
// }
// MateriaSource::MateriaSource( MateriaSource const & src ) {
// 	std::cout << "source" << std::endl;
// }
MateriaSource::~MateriaSource() {
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_slots[i])
		{
			delete this->_slots[i];
			this->_slots[i] = 0;
		}
	}
	std::cout << "del source" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m){
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
AMateria * MateriaSource::createMateria( std::string const & type){
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_slots[i]->getType() == type)
		{
			return ((this->_slots[i]->clone())); //this->_slots[i]);
		}
	}
	return 0;
}
// MateriaSource & MateriaSource::operator=( MateriaSource const & rhs ) {
	
// }
// std::ostream & operator<<( std::ostream & o, MateriaSource const & rhs) {
// 	o << rhs.getName();
// 	return o;
// }
