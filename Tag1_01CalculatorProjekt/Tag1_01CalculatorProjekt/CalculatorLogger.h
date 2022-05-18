#pragma once
#include <iostream>
#include "Calculator.h"

namespace Math {
	class CalculatorLogger: public Calculator
	{
		Calculator& calculator;
	public:

		CalculatorLogger(Calculator& calculator)
			: calculator(calculator)
		{
		}


		double add(double a, double b) override
		{
			std::cout << "Add wurde gerufen" << std::endl;
			return calculator.add(a, b);
		}
		double sub(double a, double b) override
		{
			return 5;
		}
	};

}

