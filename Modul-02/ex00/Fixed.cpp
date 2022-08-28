#include "Fixed.hpp"

const int Fixed::fracBits = 8;

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed &oth)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = oth;
}

Fixed &Fixed::operator=(const Fixed &oth)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &oth)
		this->fixedPoint = oth.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint >> Fixed::fracBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw << Fixed::fracBits;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
