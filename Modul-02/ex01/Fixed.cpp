#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointValue = number << Fixed::bits;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointValue = number * (1 << Fixed::bits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed &tar)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &tar)
		this->fixedPointValue = tar.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const{
	return this->fixedPointValue;
}

void	Fixed::setRawBits(int const res)
{
	this->fixedPointValue = res;
}

std::ostream	&operator<<(std::ostream &o, const Fixed &fix)
{
	o << fix.toFloat();
	return (o);
}

int	Fixed::toInt(void) const
{
	return (round(this->fixedPointValue >> Fixed::bits));
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->fixedPointValue) / (1 << Fixed::bits));
}