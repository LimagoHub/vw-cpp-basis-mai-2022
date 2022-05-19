#pragma once
template<class T>
class YAC
{
public:
	virtual bool eq(T a, T b) = 0;
	virtual bool lt(T a, T b) = 0;

	virtual bool le(T a, T b)
	{
		return eq(a, b) || lt(a, b);
	}
};

