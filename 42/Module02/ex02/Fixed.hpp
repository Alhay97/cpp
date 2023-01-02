#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixd_point;
        static const int frac_bit = 8;

    public:
        Fixed();
		Fixed(const int ab); // Int constructor
		Fixed(const float ab); //Float constructor
		Fixed(const Fixed &fix);
		Fixed& operator=(const Fixed &fix);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
        //comparison operators
        int operator==(const Fixed &fix)const;
        int operator!=(const Fixed &fix)const;
        int operator>=(const Fixed &fix)const;
        int operator<=(const Fixed &fix)const;
        int operator<(const Fixed &fix) const;
        int operator>(const Fixed &fix)const;

        //increment/decrement operators
        // post
        Fixed& operator++(void);
        Fixed& operator--(void);
        //pre 
        Fixed operator++(int);
        Fixed operator--(int);

        //arithmetic operators
        Fixed operator+(const Fixed& value)const;
        Fixed operator-(const Fixed& value)const;
        Fixed operator*(const Fixed& value)const;
        Fixed operator/(const Fixed& value)const;

        //min & max
        static Fixed& min(Fixed& value1, Fixed& value2);
        static Fixed& max(Fixed& value1, Fixed& value2);
        static const Fixed& min(const Fixed& value1, const Fixed& value2);
        static const Fixed& max(const Fixed& value1, const Fixed& value2);

};

std::ostream& operator<<(std::ostream& out, Fixed const& fixe); //outside the class