#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "iostream"
# define str std::string 

class	Animal{
	protected:
		str	type;
	public:
		Animal();
		Animal(const Animal &oth);
		virtual	~Animal();

		Animal	&operator=(const Animal &oth);
		str		getType() const;
		void	setType(str type);
		virtual void	makeSound() const;
};

std::ostream	&operator<<(std::ostream &oth, const Animal &obj);

#endif