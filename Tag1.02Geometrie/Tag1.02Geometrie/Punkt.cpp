#include "Punkt.h"

Punkt::Punkt(double x, double y): MAX(10.0)
{
	set_x(x);
	set_y(y);
}

void Punkt::rechts(double offset)
{
	set_x(get_x() + offset);
}
void Punkt::links()
{
	set_x(get_x() - 1);
}
void Punkt::oben()
{
	set_y(get_y() + 1);
}
void Punkt::unten()
{
	set_y(get_y() - 1);

}

std::string Punkt::to_string()
{
	return "Punkt: X=" + std::to_string(x) + ", Y=" + std::to_string(y);
}

Punkt& Punkt::operator *= (double scalar)
{
	set_x(get_x() * scalar);
	set_y(get_y() * scalar);
	return *this;
}

Punkt operator+(const Punkt& a, const Punkt& b)
{
	return Punkt{ a.get_x() + b.get_x(), a.get_y() + b.get_y() };
}


