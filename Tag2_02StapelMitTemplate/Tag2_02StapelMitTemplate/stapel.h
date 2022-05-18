#pragma once
template <class T, size_t size>
class stapel
{
	
	T feld[size];
	int index;
public:

	stapel():index(0){}
	
	void push(T value)
	{
		if (is_full())
			return;
		feld[index++] = value;
	}
	T pop()
	{
		if (is_empty())
			return 0;
		return feld[--index];
	}
	bool is_empty()
	{
		return index == 0;
	}

	bool is_full()
	{
		return index == size;
	}


};
