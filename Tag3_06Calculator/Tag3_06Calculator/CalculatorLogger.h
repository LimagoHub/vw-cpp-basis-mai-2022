#pragma once
#include <iostream>
#include "Calculator.h"
class CalculatorLogger : public Calculator
{

private:
	Calculator& calculator;

public:
	CalculatorLogger(Calculator& calculator)
		: calculator(calculator)
	{
	}

	double add(double a, double b) const  override
	{
		std::cout << "Add wurde gerufen" << std::endl;
		return calculator.add(a, b);
	}

	double sub(double a, double b) const override
	{
		return add(a, -b);
	}
};
