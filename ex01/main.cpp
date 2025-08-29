#include "iter.hpp"

template<typename T>

void nullifier(const T &)
{
	std::cout << "NULL" << std::endl;
	return;
}

template<typename T>

void print(T const & x )
{ 
	std::cout << x << std::endl; 
	return;
}

int main(void)
{
	char str[] = "aaaaa";
	Iter("12345", 5, print);
	Iter(str, 6, nullifier);
	return (0);
}