#include "Schwein.h"
#include <iostream>
void Schwein::fressen()
{
	gewicht++;
}

void Schwein::set_name(const std::string& name)
{

	// Falscher Name (Elsa) soll zu einem Fehler führen.
	this->name = name;
}

void Schwein::set_gewicht(int gewicht)
{
	this->gewicht = gewicht;
}

Schwein::Schwein(std::string name):gewicht(10)
{

	std::cout << "CTOR" << std::endl;
	set_name(name);
	anzahl++;
	
}

//Schwein::Schwein(const Schwein& other)
//{
//	std::cout << "Copy-CTOR" << std::endl;
//}

Schwein::~Schwein()
{
	std::cout << "Quuuiiiiek" << std::endl;
	anzahl--;
}

std::string Schwein::get_name() const
{
	return name;
}

int Schwein::get_gewicht() const
{
	return gewicht;
}

std::string Schwein::to_string() const
{
	return "Schwein: Name=" + name + ", Gewicht=" + std::to_string(gewicht);
}

int Schwein::anzahl = 0;

