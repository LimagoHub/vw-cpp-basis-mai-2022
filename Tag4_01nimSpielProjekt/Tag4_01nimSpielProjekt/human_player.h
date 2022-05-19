#pragma once
#include <iostream>
#include "abstract_nim_game_player.h"

namespace vw {
	namespace games {

		class human_player : public vw::games::abstract_nim_game_player
		{

		public:
			human_player(const std::string& name)
				: abstract_nim_game_player(name)
			{
			}


			int do_turn(const int& stones) override
			{
				int move;
				std::cout << " Es gibt " << stones << " Steine. Bitte nehmen Sie 1, 2 oder 3." << std::endl;
				std::cin >> move;
				return move;
			}
		};
	}
}