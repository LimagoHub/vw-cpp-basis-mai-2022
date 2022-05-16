// Tag1_03Malloc.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <malloc.h>

int main()
{
	//int *feld = (int*) malloc(sizeof(int) * 1000);
	int* feld = new int[1000];
    std::cout << "Hello World!\n";

	//free(feld);

	delete[] feld;
}

