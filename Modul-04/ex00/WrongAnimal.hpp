#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# define str std::string

class WrongAnimal
{
    protected:
		str type;
	public:

		WrongAnimal();
		WrongAnimal(WrongAnimal const &obj);
		virtual ~WrongAnimal();
		
        WrongAnimal &operator=(WrongAnimal const &obj);
		str         getType() const;
		void		setType(str const &type);
		void        makeSound() const;
};

std::ostream    &operator<<( std::ostream &o, WrongAnimal const &obj);

#endif