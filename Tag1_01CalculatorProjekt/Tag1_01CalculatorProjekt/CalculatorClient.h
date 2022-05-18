#pragma once
#include <iostream>
#include "Calculator.h"
using namespace std;
using namespace Math;
class CalculatorClient
{
	Calculator& calc;
public:


	CalculatorClient(Calculator& calc)
		: calc(calc)
	{
	}

	void run()
	{
		cout << calc.add(3, 3) << endl;
	}
};