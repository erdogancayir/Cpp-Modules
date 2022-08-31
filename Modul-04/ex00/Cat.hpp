#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal{
public:
	Cat();
	~Cat();
	Cat(const Cat &obj);

	Cat		&operator=(const Cat &obj);
	void	makeSound() const;
};

std::ostream &operator<<(std::ostream &o, const Cat &obj);

#endif