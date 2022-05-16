#pragma once
#include <ostream>
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

	std::string to_string() const;

	Schwein & operator ++() // preincrement
	{
		fressen();
		return *this;
	}
	Schwein operator ++(int dummy) // postincrement
	{
		Schwein kopie = *this;
		this->fressen();
		return kopie;
	}


	friend std::ostream& operator<<(std::ostream& os, const Schwein& obj)
	{
		return os
			<< "name: " << obj.get_name()
			<< " gewicht: " << obj.get_gewicht();
	}


	friend bool operator==(const Schwein& lhs, const Schwein& rhs)
	{
		return lhs.name == rhs.name
			&& lhs.gewicht == rhs.gewicht;
	}

	friend bool operator!=(const Schwein& lhs, const Schwein& rhs)
	{
		return !(lhs == rhs);
	}
};

