// Tag3_04SharedPointer.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <memory>
class myclass
{
public:
	myclass()
	{
		// throw bla;
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


int main()
{

	auto aptr = std::make_unique<myclass>(new myclass);

	
	
	std::shared_ptr<myclass> ptr{ new myclass };

	std::cout << ptr.use_count() << std::endl;

	
	std::shared_ptr<myclass> my_other_pointer = ptr;

	std::cout << ptr.use_count() << std::endl;
	{
		std::shared_ptr<myclass> my_very_other_pointer = ptr;

		std::cout << ptr.use_count() << std::endl;
	}
	std::cout << ptr.use_count() << std::endl;
	
	ptr->foo();
	
	
	my_other_pointer->foo();
	
	
    std::cout << "Hello World!\n";
}

