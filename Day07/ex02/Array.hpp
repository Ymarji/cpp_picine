#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <iostream>
#define LOG(x) std::cout << x << std::endl

template < typename T >
class Array
{
	private:
		T				*_arr;
		unsigned int	_len;
	public:
		Array<T>():_arr(new T(0)), _len(0){};

		Array<T>(unsigned int len):_arr(new T[len]()), _len(len){
			// for (unsigned int i = 0; i < len; i++)
			// 	_arr[i] = 0;
		};

		Array<T>(Array const &rhs){
			*this = rhs;
		};

		Array &operator=(Array const &rhs){
			if (this != &rhs)
			{
				this->_len = rhs._len;
				this->_arr = new T[_len];
				for (unsigned int i = 0; i < _len; i++)
					_arr[i] = rhs._arr[i];
			}
			return (*this);
		};

		T &operator[](int pos) const{
			if(pos >= static_cast<int>(_len) || pos < 0)
				throw std::out_of_range ("Out of Array boundary");
			else
				return this->_arr[pos];
		};

		unsigned int const &size( void ) const {
			return _len;
		}

		~Array<T>(){
			delete[]	this->_arr;
		};
};

#endif /* ARRAY_HPP */