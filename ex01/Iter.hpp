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

// Implement a function template iter that takes 3 parameters and returns nothing.
// • The first parameter is the address of an array.
// • The second one is the length of the array.
// • The third one is a function that will be called on every element of the array.
// Turn in a main.cpp file that contains your tests. Provide enough code to generate a
// test executable.
// Your iter function template must work with any type of array. The third parameter
// can be an instantiated function template.

#endif