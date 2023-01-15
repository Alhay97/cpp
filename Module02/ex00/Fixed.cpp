#include "Fixed.hpp"

/*
int fixd_point;

static const int frac_bit = 8;
*/

Fixed::Fixed()
{
	std::cout << "Default constructor called" <<std::endl;
	this->fixd_point = 0;
}
Fixed::Fixed(Fixed &fix)
{
	std::cout << "Copy Constructor called" <<std::endl;
	this->fixd_point = fix.fixd_point;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" <<std::endl;
}

Fixed& Fixed::operator=(Fixed &fix)
{
	if (this != &fix)
		this->fixd_point = fix.fixd_point;
	std::cout << "Copy assignment operator called" <<std::endl;
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" <<std::endl;
	return(this->fixd_point);
}

void Fixed::setRawBits(int const raw)
{
	this->fixd_point = raw;
}


