// Tag2_03SmartArray.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "SmartArray.h"

int a = 10;

int& get_a()
{
	return a;
}


int sinn_des_lebens()
{
	return 42;
}

int main()
{
	const int y = 10;
	int x;

	get_a() = 5;

	
    std::cout << "Hello World!\n";
}

