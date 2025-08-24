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

#endif