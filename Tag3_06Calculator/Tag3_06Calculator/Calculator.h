#pragma once

class Calculator
{
public:
	virtual double add(double a, double b) const  = 0;

	virtual double sub(double a, double b) const = 0;
};
