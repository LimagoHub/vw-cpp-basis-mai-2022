// Tag2_01Fehler.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <exception>
void foo() 
{
	int a, b, c;

	a = b = 0;

	if (b == 0) throw std::exception{"upps"};
		
	c = a / b;

	
}


int main() noexcept
{
	try
	{
		foo();
	} catch (std::exception & fehler_meldung)
	{
		std::cout << fehler_meldung.what() << std::endl;
	}
	
    std::cout << "Vielen Dank, sie haben ein kleines Programm echt glücklich gemacht\n";
}

