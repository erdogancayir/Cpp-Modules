#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class	Brain{
	protected:
		str	ideas[100];
	public:
		Brain();
		Brain(const Brain &obj);
		~Brain();

		Brain	&operator=(const Brain &obj);
		str		*getIdeas() const;
};

std::ostream &operator<<(std::ostream &oth, const Brain &obj);

#endif