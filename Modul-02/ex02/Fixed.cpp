#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointValue = number << this->bits;
}

Fixed::Fixed(const float fnumber)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointValue = roundf(fnumber * (1 << this->bits));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPointValue = copy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPointValue = src.getRawBits();
	return (*this);
}

bool Fixed::operator<(Fixed const &obj)
{
	return (this->toFloat() < obj.toFloat());
}

bool Fixed::operator<=(Fixed const &obj)
{
	return (this->toFloat() <= obj.toFloat());
}

bool Fixed::operator>(Fixed const &obj)
{
	return (this->toFloat() > obj.toFloat());
}

bool Fixed::operator>=(Fixed const &obj)
{
	return (this->toFloat() >= obj.toFloat());
}

bool Fixed::operator==(Fixed const &obj)
{
	return (this->toFloat() == obj.toFloat());
}

bool Fixed::operator!=(Fixed const &obj)
{
	return (this->toFloat() != obj.toFloat());
}

std::ostream &operator<<(std::ostream &o, const Fixed &f)
{
	o << f.toFloat();
	return (o);
}

Fixed Fixed::operator+(Fixed const &obj)
{
	return (Fixed)(this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator-(Fixed const &obj)
{
	return (Fixed)(this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator*(Fixed const &obj)
{
	return (Fixed)(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(Fixed const &obj)
{
	return (Fixed)(this->toFloat() / obj.toFloat());
}

Fixed &Fixed::operator++()
{
	this->fixedPointValue++;
	return *this;
}
Fixed &Fixed::operator--()
{
	this->fixedPointValue--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->fixedPointValue--;
	return tmp;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->fixedPointValue++;
	return tmp;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
	return (fixedPointValue / (float)(1 << bits));
}

int Fixed::toInt(void) const
{
	return (fixedPointValue >> bits);
}

Fixed Fixed::max(Fixed obj1, Fixed obj2)
{
	return obj1 > obj2 ? obj1 : obj2;
}
Fixed Fixed::min(Fixed obj1, Fixed obj2)
{
	return obj1 < obj2 ? obj1 : obj2;
}
