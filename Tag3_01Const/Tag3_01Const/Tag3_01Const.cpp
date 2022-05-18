// Tag3_01Const.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

int a = 5;

int const & get_a()
{
	return a;
}

int main() 
{
	int *p1, p2, *p3;
	const int einzelpreis = 10;
	const int anzahl = 2;
	const int gesamt = einzelpreis * anzahl;

	char feld[] = "Hallo";
	
	const char* const buffer = feld;

	//buffer = nullptr;
	//buffer[0] = 'h';
	
	
    std::cout << "Hello World!\n";
}

