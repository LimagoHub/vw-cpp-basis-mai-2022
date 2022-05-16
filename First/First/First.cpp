// First.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;


void unter(int &a)
{
	a = 100;
}
void ober()
{
	int x = 10;
	unter(x);
	cout << x << endl;
}


int main()
{
	ober();
    cout << "Hello World!\n";
}


