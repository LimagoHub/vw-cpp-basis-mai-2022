#pragma once
#include <iostream>
#include "Punkt.h"
class Kreis : public Punkt
{
private:
	double radius;

public:


	Kreis() :Kreis(0, 0, 0)
	{

		std::cout << "bla , bla Kreis" << std::endl;
	}
	Kreis(double radius) :Kreis(radius, 0, 0)
	{


	}

	Kreis(double x, double y) :Kreis(0, x, y)
	{


	}

	Kreis(double radius, double x, double y) :Punkt(x, y), radius(radius)
	{

		std::cout << "CTOR Kreis" << std::endl;
	}

	// ~Kreis() override
	// {
	// 	// sdfadfadfg
	// 	Punkt::~Punkt();
	// }

	double get_radius() const
	{
		return radius;
	}

	void set_radius(const double radius)
	{
		this->radius = radius;
	}

	std::string to_string() override
	{
		return Punkt::to_string() + ", Radius=" + std::to_string(radius);
		
	}
};

