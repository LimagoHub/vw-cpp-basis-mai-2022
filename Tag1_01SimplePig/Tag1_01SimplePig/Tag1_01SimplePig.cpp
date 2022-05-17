// Tag1_01SimplePig.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

#include "Schwein.h"



int main()
{

	Schwein piggy{ "Miss Piggy" };
	
	Schwein babe;

	babe = piggy;
	
	std::cout << piggy << std::endl;

	piggy++;
	
	std::cout << piggy << std::endl;

	

	

	
	

	

}
