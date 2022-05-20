// Tag5_01Weak_pointer.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <memory>

class my_class
{
public:
	my_class() = default;

	void foo()
	{
		std::cout << "Hier ist foo" << std::endl;
	}
	~my_class()
	{
		std::cout << "DTOR\n";
	}
};

int main()
{
	std::shared_ptr<my_class> p1{ nullptr };
	std::shared_ptr<my_class> p2 {nullptr};

	if (p1 == p2)
	{
		std::cout << "gleich" << std::endl;
	}




}

