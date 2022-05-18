// Tag2_02StapelMitTemplate.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "stapel.h"

template<typename T>
void tausche(T &a, T &b)
{
	T help = a;
	a = b;
	b = help;
}

int main()
{

	int x = 50;
	int y = 100;

	tausche(x, y);

	int feld[10];

	feld[11] = 5;
	
	
	stapel<int, 10> my_stack;
	stapel<double, 20> my_stack_2;

	
    std::cout << "Hello World!\n";
}

