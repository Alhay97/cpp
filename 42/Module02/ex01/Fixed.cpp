#include "Fixed.hpp"


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

Fixed::Fixed(const int ab) // Int constructor
{
	std::cout <<"Int constructor called"<<std::endl;
	setRawBits(ab << this->frac_bit);
}

Fixed::Fixed(const float ab) //Float constructor
{
	std::cout <<"Float constructor called"<<std::endl;
	setRawBits((int)(roundf(ab * (1 << this->frac_bit))));
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

float Fixed::toFloat( void ) const //that converts the fixed-point value to a floating-point value.
{
	return ((float)this->getRawBits() / (1 <<frac_bit));
}
int Fixed::toInt( void ) const//that converts the fixed-point value to an integer value.
{
	return(this->getRawBits() >> this->frac_bit);
}

std::ostream& operator<<(std::ostream& out, Fixed const& fixe)
{
	out = fixe.toFloat();
	return(out);
}




