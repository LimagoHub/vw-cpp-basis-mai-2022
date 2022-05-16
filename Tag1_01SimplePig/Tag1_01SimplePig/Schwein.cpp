#include "Schwein.h"
#include <iostream>
void Schwein::fressen()
{
	gewicht++;
}

void Schwein::set_name(const std::string& name)
{
	this->name = name;
}

void Schwein::set_gewicht(int gewicht)
{
	this->gewicht = gewicht;
}

Schwein::Schwein(std::string name):gewicht(10)
{
	set_name(name);
	
}

Schwein::~Schwein()
{
	std::cout << "Quuuiiiiek" << std::endl;
}

std::string Schwein::get_name() const
{
	return name;
}

int Schwein::get_gewicht() const
{
	return gewicht;
}

