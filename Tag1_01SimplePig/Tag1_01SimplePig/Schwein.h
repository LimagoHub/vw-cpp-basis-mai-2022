#pragma once
#include <string>

class Schwein
{
private:
	std::string name;
	int gewicht;
	void set_gewicht(int gewicht);

public:

	Schwein(std::string name = "Nobody");
	~Schwein();
	
	void fressen();


	void set_name(const std::string& name);
	std::string get_name() const;
	int get_gewicht() const;

	std::string to_string()
	{
		return "Schwein: Name=" + name + ", Gewicht=" + std::to_string(gewicht);
	}
};

