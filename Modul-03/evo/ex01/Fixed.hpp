#ifndef FIXED_HPP
# define FIXED_HPP

#include "iostream"
#include "math.h"

class Fixed{
	private:
		int					fixedPointValue;
		static const int	bits = 8;
	public:
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed	&operator=(const Fixed &tar);
		void	setRawBits(int const res);
		int		getRawBits(void) const;
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream &operator<<(std::ostream &o, const Fixed &fix);

#endif