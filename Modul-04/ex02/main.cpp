#include "Dog.hpp"
#include "Cat.hpp"
#define N 10

int main(void)
{
	Animal *animals[N];

	for (int i = 0; i < N; i++)
	{
		if (i & 1)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < N; i++)
	{
		delete animals[i];
	}
	// copy test:
	/* Dog dog;
	Dog tmp = dog; */
	// subject 
	/* const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	return 0; */


	// shoots an ice bolt at bob uncomment the following lines and the compiler will throw an error:
   /*  Animal meta = Animal();
    (void) meta; */

}