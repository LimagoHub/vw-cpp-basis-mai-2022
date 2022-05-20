#pragma once
#include <iostream>
#include <memory>
#include "liste.h"
#include "schwein.h"

using namespace std;
using namespace vw::collections;

class ListeClient
{
	liste < shared_ptr<Schwein>>& liste_;


public:
	ListeClient(liste<shared_ptr<Schwein>>& liste)
		: liste_(liste)
	{
	}
	
};
