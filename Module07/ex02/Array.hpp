#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T> class Array
{
	private:
		T *array;
		int Tsize;

	public:
		Array()
		{
			this->array = NULL;
			this->Tsize = 0;
		}

		Array(unsigned int _size)
		{
			this-> Tsize = _size;
			this-> array = new T[_size];
		}

		Array (Array &copy)
		{
			*this = copy;
		}

		Array operator=(Array &source)
		{
			this->Tsize = source.size();
			this->array = new T[this->_size];
			int i = 0;
			while( i < this->Tsize)
			{
				this->array[i]  = source.array[i];
				i++;
			}
			return *this;
		}

		Array &operator [] (const int i ) const
		{
			if (i >= this->Tsize || i < 0)
				throw std::overflow_error("index is out of bounds");
			return this->array[i];
		}

		~Array()
		{
			if(this->Tsize > 0)
				delete [] this->array;
		}

		int Size() const
		{
			return (this->Tsize);
		}
};

#endif
