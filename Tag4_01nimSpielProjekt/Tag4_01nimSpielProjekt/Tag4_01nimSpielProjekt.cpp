// Tag4_01nimSpielProjekt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "nim_game_impl.h"
#include "GameClient.h"

using namespace vw::games;

int main()
{
	nim_game_impl game;
	GameClient client{ game };
	client.run();
	
   
}


