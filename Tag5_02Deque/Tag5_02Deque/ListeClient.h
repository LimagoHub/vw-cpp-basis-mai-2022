#pragma once
#include <iostream>
#include <memory>
#include <string>
#include "liste.h"
#include "schwein.h"

using namespace std;
using namespace vw::collections;

class ListeClient
{
	liste < shared_ptr<Schwein>>& liste_;


	auto create_schwein() -> shared_ptr<Schwein> {
		string name;
		cout << "bitte geben sie dem Schwein einen Namen: ";
		cin >> name;
		return shared_ptr<Schwein> {new Schwein{ name }};
	}

	auto show_current_pig_if_exists()
	{
		auto ptr = liste_.get();
		if (ptr.use_count() == 0)
		{
			cout << "liste ist leer!" << endl;
		}
		else
		{
			cout << ptr->to_string() << endl;
		}
	}

	auto show_current_state()
	{
		cout << "is_empty=" << liste_.is_empty() << ", is_begin_of_list=" << liste_.is_begin_of_list() << ", is_end_of_list=" << liste_.is_end_of_list() << endl;
	}

	auto menu() ->void {

		while (true) {
		auto retval = 0;

		cout << "1................neu" << endl;
		cout << "2................aendern" << endl;
		cout << "3................anzeigen" << endl;
		cout << "4................zum ersten" << endl;
		cout << "5................zum letzen" << endl;
		cout << "6................zum naechsten" << endl;
		cout << "7................zum voherigen" << endl;
		cout << "8................loeschen" << endl;
		cout << "9................status" << endl;
		cout << "0................ende" << endl;

		cin >> retval;
		switch (retval)
		{
		case 1: liste_.append(create_schwein()); break;
		case 2: liste_.update(create_schwein()); break;
		case 3: show_current_pig_if_exists(); break;
		case 4: liste_.move_first(); break;
		case 5: liste_.move_last(); break;
		case 6: liste_.move_next(); break;
		case 7: liste_.move_previous(); break;
		case 8: liste_.remove(); break;
		case 9: show_current_state(); break;
		case 0: return;
		}

	}
	}

public:
	ListeClient(liste<shared_ptr<Schwein>>& liste)
		: liste_(liste)
	{
	}

	auto run() -> void
	{
		menu();
	}
	
};
