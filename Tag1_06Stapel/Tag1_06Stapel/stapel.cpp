#include <iostream>
#include "stapel.h"
using namespace std;
collections::stapel::stapel()
{
	cout << "CTOR" << endl;
}

void collections::stapel::push(const int value)
{
	cout << "push" << endl;
}

int collections::stapel::pop()
{
	cout << "pop" << endl;
	return 0;
}

bool collections::stapel::is_empty() const
{
	cout << "is_empty" << endl;
	return true;
}

bool collections::stapel::is_full() const
{
	cout << "is_full" << endl;
	return true;
}
