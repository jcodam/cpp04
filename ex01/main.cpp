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
	const Dog* j22 = new Dog();
	const Animal* j2 = j22;
	const Animal* i2 = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << j2->getType() << " " << std::endl;
	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound(); //will output the cat sound!
	j2->makeSound();
	meta->makeSound();
	std::cout << j << " " << std::endl;
	std::cout << i << " " << std::endl;
	std::cout << j2 << " " << std::endl;
	std::cout << i2 << " " << std::endl;
	const Animal* jcopy = new Dog(*j22);
	const Animal* icopy = new Cat();
	std::cout << *jcopy << " " << std::endl;
	std::cout << *icopy << " " << std::endl;
	delete i;
	delete j;
	delete i2;
	delete j2;
	delete icopy;
	delete jcopy;
	delete meta;

	// wrong test
	// const WrongAnimal* Wrongmeta = new WrongAnimal();
	// const WrongAnimal* Wrongj = new WrongDog();
	// const WrongAnimal* Wrongi = new WrongCat();
	// std::cout << Wrongj->getType() << " " << std::endl;
	// std::cout << Wrongi->getType() << " " << std::endl;
	// Wrongi->makeSound(); //will output the cat sound!
	// Wrongj->makeSound();
	// Wrongmeta->makeSound();

	// delete Wrongi;
	// delete Wrongj;
	// delete Wrongmeta;
	// // wrong test right why
	// const WrongAnimal* rightmeta = new WrongAnimal();
	// const WrongDog* rightj = new WrongDog();
	// const WrongCat* righti = new WrongCat();
	// std::cout << rightj->getType() << " " << std::endl;
	// std::cout << righti->getType() << " " << std::endl;
	// righti->makeSound(); //will output the cat sound!
	// rightj->makeSound();
	// rightmeta->makeSound();

	// delete righti;
	// delete rightj;
	// delete rightmeta;
	return 0;
}
