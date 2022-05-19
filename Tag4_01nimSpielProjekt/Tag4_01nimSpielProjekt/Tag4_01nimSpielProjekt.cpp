// Tag4_01nimSpielProjekt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "nim_game_impl.h"
#include "GameClient.h"
#include "human_player.h"
#include "computer_player.h"
#include "oma_player.h"

using namespace vw::games;

int main()
{
	nim_game_impl game;
	human_player human_player{ "Mensch" };
	computer_player computer_player{ "HAL" };
	oma_player oma_player{ "Erna" };
	
	game.add_player(&human_player);
	game.add_player(&computer_player);
	//game.add_player(&oma_player);
	
	GameClient client{ game };
	client.run();
	
   
}


