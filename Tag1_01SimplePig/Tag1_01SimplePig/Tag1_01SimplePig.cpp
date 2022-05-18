// Tag1_01SimplePig.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

#include "Schwein.h"



int main()
{
	
	std::cout << Schwein::get_anzahl() << std::endl;
	Schwein piggy{ "Miss Piggy" };
	std::cout << Schwein::get_anzahl() << std::endl;
	Schwein babe;
	std::cout << Schwein::get_anzahl() << std::endl;

	{
		Schwein rudi;
		std::cout << Schwein::get_anzahl() << std::endl;
	}
	std::cout << Schwein::get_anzahl() << std::endl;
	
	babe = piggy;
	
	std::cout << piggy << std::endl;

	piggy++;
	
	std::cout << piggy << std::endl;

	

	

	
	

	

}
