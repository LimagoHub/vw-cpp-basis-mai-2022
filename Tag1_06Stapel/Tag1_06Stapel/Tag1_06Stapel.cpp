// Tag1_06Stapel.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "stapel.h"

using namespace vw::collections;


int main()
{
	try {
		stapel my_stack;

		for (int i = 0; i < 10; ++i)
		{
			if (!my_stack.is_full())
			{
				my_stack.push(i);
			}
		}
		while (!my_stack.is_empty())
		{
			std::cout << my_stack.pop() << std::endl;
		}
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
