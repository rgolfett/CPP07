#include "iter.hpp"

template<typename T>

void nullifier(T &)
{
	std::cout << "NULL" << std::endl;
	return;
}

int main(void)
{
	Iter("12345", 5, nullifier);
	return (0);
}