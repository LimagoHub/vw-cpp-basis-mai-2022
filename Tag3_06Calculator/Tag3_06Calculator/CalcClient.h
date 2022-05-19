#include <iostream>
#include "Calculator.h"
class CalcClient
{
	Calculator& calculator;

public:


	CalcClient(Calculator& calculator)
		: calculator(calculator)
	{
	}

	void run() {
		

		std::cout << calculator.add(3, 4) << std::endl;
	}
};

