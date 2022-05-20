// Tag5_02Deque.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <memory>
#include "ListeClient.h"
#include "linked_list_impl.h"
#include "Schwein.h"

using namespace std;
using namespace vw::collections;

int main()
{
	linked_list_impl<shared_ptr<Schwein>> liste;
	ListeClient client{ liste };
	client.run();
    std::cout << "Hello World!\n";
}

