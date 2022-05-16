// Tag1.02Geometrie.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

#include  "Punkt.h"

int main()
{
	Punkt a{ 1,2 };
	Punkt b{ 3,4 };

	Punkt c = a + b;



	
	std::cout << c.to_string() << std::endl;
}

