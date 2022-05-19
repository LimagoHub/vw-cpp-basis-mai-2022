#pragma once
#include <iostream>
#include "Calculator.h"

class CalculatorSecure : public Calculator
{
	Calculator& calculator_;


public:
	CalculatorSecure(Calculator& calculator)
		: calculator_(calculator)
	{
	}


	double add(double a, double b) const override
	{
		std::cout << "Du kommst hier rein" << std::endl;
		return calculator_.add(a, b);
	}
	double sub(double a, double b) const override
	{
		std::cout << "Du kommst hier rein" << std::endl;
		return calculator_.sub(a, b);
	}
};