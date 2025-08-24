#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <stdexcept>
#include <typeinfo>

template <typename T> void swap(T &x, T &y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}
template <typename T> T min(T &x, T &y)
{
	if (x < y)
		return (x);
	return (y);
}

template <typename T> T max(T x, T y)
{
	if (x > y)
		return (x);
	return (y);
}

#endif

