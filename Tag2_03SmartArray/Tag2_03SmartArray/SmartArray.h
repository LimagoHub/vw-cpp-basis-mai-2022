#pragma once
#include <exception>

template<class T, size_t size>
class smart_array
{
	T data[size];

public:
	smart_array() = default;

	size_t size() const noexcept
	{
		return size;
	}

	T & at(const size_t& index)
	{
		return *this[index];
	}

	T& operator [](const size_t &index)
	{
		if (index >= size())
			throw std::out_of_range("Upps");
		return data[index];
	}
	
};