#pragma once
#include <string>
class Punkt
{
private:
	double x;
	double y;
	const double MAX;
	
	void set_x(double x)
	{
		if (x < -MAX) x = -MAX;
		if (x > MAX) x = MAX;

		this->x = x;
	}


	void set_y(double y)
	{
		if (y < -MAX) y = -MAX;
		if (y > MAX) y = MAX;

		this->y = y;
	}

public:

	Punkt(double x = 0.0, double y = 0.0);

	double get_x() const
	{
		return x;
	}

	double get_y() const
	{
		return y;
	}

	void rechts(double offset = 1.0);
	
	void links();
	void oben();
	void unten();
	std::string to_string();
};

