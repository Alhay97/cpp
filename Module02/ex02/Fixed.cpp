#include "Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "Default constructor called" <<std::endl;
	this->fixd_point = 0;
}

Fixed::Fixed(const Fixed &fix)
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

Fixed& Fixed::operator=(const Fixed &fix)
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
	out <<  fixe.toFloat();
	return(out);
}

//comparison operators
int Fixed::operator==(const Fixed &fix)const
{
    if (this->fixd_point == fix.fixd_point)
        return (1);
    return (0);
}

int Fixed::operator!=(const Fixed &fix)const
{
    if (this->fixd_point != fix.fixd_point)
        return (1);
    return (0);
}

int Fixed::operator>=(const Fixed &fix)const
{
    if (this->fixd_point >= fix.fixd_point)
        return (1);
    return (0);
}

int Fixed::operator<=(const Fixed &fix)const
{
    if(this->fixd_point <= fix.fixd_point)
        return (1);
    return (0);
}

int Fixed::operator < (const Fixed &fix) const
{
    if (this->fixd_point < fix.fixd_point)
        return (1);
    return (0);
}

int Fixed::operator >(const Fixed &fix) const
{
    if(this->fixd_point > fix.fixd_point)
        return (1);
    return (0);
}

//arithmetic operators

Fixed Fixed::operator+(const Fixed& value)const
{
    Fixed cop;
    cop.setRawBits(this->fixd_point + value.fixd_point);
    return(cop);
}
Fixed Fixed::operator-(const Fixed& value)const
{
    Fixed cop;
    cop.setRawBits(this->fixd_point - value.fixd_point);
    return(cop);
}
Fixed Fixed::operator*(const Fixed& value)const
{
    Fixed cop;
    cop.setRawBits((this->fixd_point * value.fixd_point)/ (1 << frac_bit));
    return(cop);
}
Fixed Fixed::operator/(const Fixed& value)const
{
    Fixed cop;
    cop.setRawBits((this->fixd_point / value.fixd_point)/ (1 << frac_bit));
    return(cop);
}

//increment/decrement operators
// post
Fixed& Fixed::operator++(void)
{
    this->fixd_point++;
    return(*this);
}

Fixed& Fixed::operator--(void)
{
    this->fixd_point--;
    return(*this);
}

//pre
Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    ++(*this);
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    --(*this);
    return temp;
}

//min & max
 Fixed& Fixed::min(Fixed& value1, Fixed& value2)
{
    if(value1 < value2)
        return (value1);
    return (value2);
}
Fixed& Fixed::max(Fixed& value1, Fixed& value2)
{
    if (value1 > value2)
        return (value1);
    return (value2);
}

const Fixed& Fixed::min(const Fixed& value1, const Fixed& value2)
{
    if(value1 < value2)
        return (value1);
    else
        return (value2);
}
const Fixed& Fixed::max(const Fixed& value1, const Fixed& value2)
{
    if (value1 > value2)
        return (value1);
    else
        return (value2);
}
