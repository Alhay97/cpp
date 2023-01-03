# ifndef FIXED_POINT
# define FIXED_POINT

#include <iostream>

class Fixed
{
    private:
        int fixd_point;
        static const int frac_bit = 8;

    public:
        Fixed();
		Fixed(Fixed &fix);
		Fixed& operator=(Fixed &fix);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
