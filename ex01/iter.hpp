#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <stdexcept>
#include <typeinfo>

template <typename T> void Iter(T *adress, size_t lengh, void funct(T &)) 
{
	size_t i = 0;
	if (adress == NULL || funct == NULL)
		return ;
	while (i < lengh)
	{
		funct(adress[i]);
		i++;
	}
}

// template <typename T> void Iter(T *adress, size_t lengh, void funct(const T &)) 
// {
// 	size_t i = 0;
// 	if (adress == NULL || funct == NULL)
// 		return ;
// 	while (i < lengh)
// 	{
// 		funct(adress[i]);
// 		i++;
// 	}
// }

#endif