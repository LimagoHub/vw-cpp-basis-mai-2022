// Tag1_06Stapel.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "stapel.h"

using namespace vw::collections;


void main_impl()
{
	stapel my_stack;

	for (int i = 0; i < 10; ++i)
	{
		if (!my_stack.is_full())
		{
			my_stack.push(i);
		}
	}

	stapel my_other_stack = std::move(my_stack);
		

		
	while (!my_stack.is_empty())
	{
		std::cout << my_stack.pop() << std::endl;
	}

	while (!my_other_stack.is_empty())
	{
		std::cout << my_other_stack.pop() << std::endl;
	}
}

int main()
{
	try {
		main_impl();
		
	} catch (std::overflow_error & e)
	{
		std::cout << e.what() << std::endl;
		
	}
	catch (std::underflow_error& e)
	{
		std::cout << e.what() << std::endl;
	}

	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Häh?" << std::endl;
	}

	
   
}

