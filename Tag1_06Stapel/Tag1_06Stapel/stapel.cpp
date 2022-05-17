#include <iostream>
#include <memory>
#include <exception>
#include "stapel.h"
using namespace std;
vw::collections::stapel::stapel(size_t size) noexcept :data(new int[size]),index(0),size(size)  
{
	
}

vw::collections::stapel::stapel(const stapel& other)  noexcept
{
	init(other);
}

vw::collections::stapel::~stapel() noexcept
{
	delete[] data;
}

void vw::collections::stapel::push(const int value)
{
	if (is_full())
		throw std::overflow_error{ "push bei vollem Stapel" };
	data[index++] = value;
	
}

int vw::collections::stapel::pop()
{
	if(is_empty())
		throw std::underflow_error{ "pop bei leerem Stapel" };

	return data[--index];
}

bool vw::collections::stapel::is_empty() const noexcept
{
	return index <= 0;
}

bool vw::collections::stapel::is_full() const noexcept
{
	
	return index >= size;
}



vw::collections::stapel& vw::collections::stapel::operator=(const stapel& other)
{
	delete[] data;
	init(other);
	return *this;
}

void vw::collections::stapel::init(const vw::collections::stapel& other) noexcept
{
	size = other.size;
	index = other.index;
	data = new int[size];
	memcpy_s(data, size * sizeof(int), other.data, size * sizeof(int));
}

// https://github.com/LimagoHub/vw-cpp-basis-mai-2022
