#include <iostream>

class Fixed
{
    private:
        int fixd_point;
        static const int frac_bit = 8;

    public:
        Fixed();
		Fixed(const int ab); // Int constructor
		Fixed(const float ab); //Float constructor
		Fixed(Fixed &fix);
		Fixed& operator=(Fixed &fix);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
		std::ostream& operator<<(std::ostream& out, Fixed const& fixe);
};
