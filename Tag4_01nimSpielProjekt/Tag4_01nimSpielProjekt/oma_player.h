#pragma once
#include <iostream>
#include <stdlib.h>
#include <random>
#include "abstract_nim_game_player.h"

namespace vw {
	namespace games {

		class oma_player : public vw::games::abstract_nim_game_player
		{
			time_t t;
		public:
			oma_player(const std::string& name)
				: abstract_nim_game_player(name)
			{
				srand((unsigned)time(&t));
			}


			int do_turn(const int& stones) override
			{
				int move = (rand() % 3) + 1;
				std::cout << "Oma zieht " << move << " Steine." << std::endl;
				return move;
			}
		};
	}
}