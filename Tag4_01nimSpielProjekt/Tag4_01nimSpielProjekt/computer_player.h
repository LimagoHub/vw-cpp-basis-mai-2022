#pragma once
#include <iostream>
#include <vector>
#include "abstract_nim_game_player.h"

namespace vw {
	namespace games {

		class computer_player : public vw::games::abstract_nim_game_player
		{

		public:
			computer_player(const std::string& name)
				: abstract_nim_game_player(name)
			{
			}


			int do_turn(const int& stones) override
			{
				
				const std::vector<int> moves { 3,1,1,2 };
				int move = moves[stones % 4];
				std::cout << "Computer nimmt " << move << " Steine" << std::endl;
				return move;
			}
		};
	}
}