// Tag1.02Geometrie.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <exception>

#include  "Punkt.h"
#include  "Kreis.h"

class my_exception: public std::exception
{
public:
	my_exception()
	{
	}

	my_exception(char const* _Message)
		: exception(_Message)
	{
	}

	my_exception(char const* _Message, int i)
		: exception(_Message, i)
	{
	}

	my_exception(exception const& _Other)
		: exception(_Other)
	{
	}


	char const* what() const override
	{
		return "upps";
	}
};

int main()
{
	
	Kreis k;

	Punkt &p = k;

	try {
		throw my_exception{};
	}
	catch (my_exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << p.to_string() << std::endl;
}

