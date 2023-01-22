#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> void alswap(T &num1, T &num2)
{
	T temp = 0;

	temp = num1;
	num1 = num2;
	num2 = temp;
}


template <typename T> T almax (T &num1, T &num2)
{
	return (num1 > num2) ? num1 : num2;
}

template <typename T> T almin (T &num1, T &num2)
{
	return (num1 < num2) ? num1 : num2;
}

#endif
