#pragma once
#include <iostream>
#include "Calculator.h"

namespace Math {
	class CalculatorSecure : public Calculator
	{
		Calculator& calculator;
	public:

		CalculatorSecure(Calculator& calculator)
			: calculator(calculator)
		{
		}


		double add(double a, double b) override
		{
			std::cout << "Du kommst hier rein" << std::endl;
			return calculator.add(a, b);
		}
		double sub(double a, double b) override
		{
			return 5;
		}
	};

}