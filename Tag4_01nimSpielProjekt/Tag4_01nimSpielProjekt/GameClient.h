#pragma once
#include "game.h"

using namespace vw::games;
class GameClient
{
	game& game_;


public:
	GameClient(game& game)
		: game_(game)
	{
	}

	void run()
	{
		game_.play();
	}
};
