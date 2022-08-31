#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "iostream"
#define str std::string

#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLUE "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"
#define NORM "\x1B[0m"

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &oth);
		virtual ~Animal();

		Animal			&operator=(const Animal &oth);
		str				getType() const;
		void			setType(const str type);
		virtual void	makeSound() const;
};

std::ostream	&operator<<(std::ostream &o, Animal const &i);

#endif