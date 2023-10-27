#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

#include "../mycolor.hpp"
#include <limits>
#include <cstdio>

int main(void)
{
	// subject test

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;

	// wrong test
	const WrongAnimal* Wrongmeta = new WrongAnimal();
	const WrongAnimal* Wrongj = new WrongDog();
	const WrongAnimal* Wrongi = new WrongCat();
	std::cout << Wrongj->getType() << " " << std::endl;
	std::cout << Wrongi->getType() << " " << std::endl;
	Wrongi->makeSound(); //will output the cat sound!
	Wrongj->makeSound();
	Wrongmeta->makeSound();

	delete Wrongi;
	delete Wrongj;
	delete Wrongmeta;
	// wrong test right why
	const WrongAnimal* rightmeta = new WrongAnimal();
	const WrongDog* rightj = new WrongDog();
	const WrongCat* righti = new WrongCat();
	std::cout << rightj->getType() << " " << std::endl;
	std::cout << righti->getType() << " " << std::endl;
	righti->makeSound(); //will output the cat sound!
	rightj->makeSound();
	rightmeta->makeSound();

	delete righti;
	delete rightj;
	delete rightmeta;
	return 0;
}
