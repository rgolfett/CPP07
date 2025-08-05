#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstddef>

template <typename T>

class Array
{
	private:
		T *array;
		size_t _size;
		public:
		Array()
		{
			std::cout << "Array template default constructor called" << std::endl;
			size = 0;
			array = NULL;
		}

		Array(unsigned int n)
		{
			std::cout << "Array template class constructor called" << std::endl;
			_size = n;
			array = new T[n];
		}

		Array(Array const &src)
		{
			std::cout << "Array template class copy constructor called" << std::endl;
			this->_size = src._size;
			this->array = new T[src._size]();
			size_t i = 0;
			while (i < src._size)
			{
				this->array[i] = src.array[i];
				i++;
			}
		}

		~Array()
		{
			std::cout << "Array template class destructor called" << std::endl;
			delete [] array;
		}

		Array &operator=(Array const &src)
		{
			std::cout << "Array template class copy called" << std::endl;
			delete [] array;
			this->_size = src._size;
			this->array = new T[src._size]();
			size_t i = 0;
			while (i < src._size)
			{
				this->array[i] = src.array[i];
				i++;
			}
			return (*this);
		}

		T &operator[](size_t nb)
		{
			if (nb >= _size)
				throw(OutOfBoundException());
			return (array[nb]);
		}

		size_t size() const
		{
			return(_size);
		}

		class OutOfBoundException : public std::exception
		{
			public :
				const char *what() const throw()
				{
					return ("Nb too high\n");
				}
		};

};	



// Develop a class template Array that contains elements of type T and that implements
// the following behavior and functions:

// • Construction with no parameter: Creates an empty array.
// • Construction with an unsigned int n as a parameter: Creates an array of n elements
// initialized by default.

// Tip: Try to compile int * a = new int(); then display *a.

// • Construction by copy and assignment operator. In both cases, modifying either the
// original array or its copy after copying musn’t affect the other array.

// • You MUST use the operator new[] to allocate memory. Preventive allocation (al-
// locating memory in advance) is forbidden. Your program must never access non-
// allocated memory.
// • Elements can be accessed through the subscript operator: [ ].
// • When accessing an element with the [ ] operator, if its index is out of bounds, an
// std::exception is thrown.
// • A member function _size() that returns the number of elements in the array. This
// member function takes no parameter and musn’t modify the current instance.
// As usual, ensure everything works as expected and turn in a main.cpp file that con-
// tains your tests.


#endif