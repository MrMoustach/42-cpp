/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:01:53 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/24 15:32:36 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:
		T *_ptr;
		unsigned int _size;
	public:
		Array()
		{
			_ptr = new T;
		}
		Array(unsigned int size)
		{
			_ptr = new T[size];
			_size = size;
			for (unsigned int i = 0; i < size; i++)
				_ptr[i] = 0;
		}
		Array(Array& other)
		{
			_size = other.size();
			_ptr = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
			{
				_ptr[i] = other[i];
			}
		}
		Array operator= (const Array& other)
		{
			_size = other.size();
			delete [] _ptr;
			_ptr = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
			{
				_ptr[i] = other[i];
			}
		}
		~Array()
		{
			delete [] _ptr;
		}
		unsigned int size() const
		{
			return (_size);
		}
		T& operator[](int index)
		{
			if (index < 0 || index >= (int)_size)
				throw Array::OutOfBoundsException();
			return _ptr[index];
		}
		class OutOfBoundsException : public std::exception
		{
			public:
				OutOfBoundsException(){}
				const char* what() const throw ()
				{
					return "index out of bounds.";
				}
		};
};