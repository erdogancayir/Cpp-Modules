#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << i->getType() << ": ";
    i->makeSound(); // animal 'inkini cagirmasin diye virtual;
    std::cout << j->getType() << ": ";
	j->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    delete j;
    std::cout << RED << " Wrong " << WHT << std::endl;
    const WrongAnimal *k = new WrongCat();
    k->makeSound();
    delete k;
	return 0;

    /* const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	meta->makeSound();
	cat->makeSound();
	dog->makeSound();
	delete meta;
	delete cat;
	delete dog;


	const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* catWrong = new WrongCat();

	std::cout << catWrong->getType() << std::endl;
	metaWrong->makeSound();
	catWrong->makeSound();
	delete metaWrong;
	delete catWrong; */
}