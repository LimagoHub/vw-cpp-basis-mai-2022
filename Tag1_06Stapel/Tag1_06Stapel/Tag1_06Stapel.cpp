// Tag1_06Stapel.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "stapel.h"

using namespace collections;

int main()
{

	stapel my_stack;

	for (int i = 0; i < 10; ++i)
	{
		if(! my_stack.is_full())
		{
			my_stack.push(i);
		}
	}
	while( ! my_stack.is_empty())
	{
		std::cout << my_stack.pop() << std::endl;
	}


	
    std::cout << "Hello World!\n";
}

