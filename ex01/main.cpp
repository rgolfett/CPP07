#include "Iter.hpp"

template<typename T>

void nullifier(T &)
{
	std::cout << "NULL" << std::endl;
	return;
}

template<typename T>

void func(T const &x)
{
	std::cout << x << std::endl;
}

int main(void)
{
	Iter("12345", 5, nullifier);
	Iter("12345", 5, func);
	return (0);
}