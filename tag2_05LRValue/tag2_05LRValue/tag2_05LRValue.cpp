// tag2_05LRValue.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>

void foo(int & x) // nur für lvalues
{
	std::cout << "normal foo " << x << std::endl;
}

void foo(int&& x) // nur für rvalues
{
	std::cout << "rvalue foo " << x << std::endl;
}


int main()
{
	/*int a = 5;

	foo(std::move(a));
	foo(10);
	
    std::cout << "Hello World!\n";
*/

	std::string a = "Hello World";
	std::string b = "Hallo Welt";

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	a = std::move(b);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
}

