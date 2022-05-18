// Tag3_03UniquePointer.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <memory>

class myclass
{
public:
	myclass()
	{
		std::cout << "MyClass CTOR\n";
	}

	void foo()
	{
		std::cout << "Hier ist foo aus myclass\n";
	}

	~myclass()
	{
		std::cout << "MyClass DTOR\n";
	}
};

auto source() -> std::unique_ptr<myclass>
{
	std::unique_ptr<myclass> retval{ new myclass{} };
	return retval;
}

auto sink(std::unique_ptr<myclass> value) 
{
	value->foo();
	std::cout << "Hier ist sink\n";
	return value;
}

int main()
{

	std::unique_ptr<myclass> ptr = source();

	ptr->foo();
	ptr = sink(std::move(ptr));
	
    std::cout << "Hello World!\n";

	
}

