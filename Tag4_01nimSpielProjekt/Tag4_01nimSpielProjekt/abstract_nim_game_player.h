#pragma once

#include "abstract_game_player.h"

namespace vw {
	namespace games {

		class abstract_nim_game_player: public vw::games::abstract_game_player<int,int>
		{

			std::string name;


		public:
			abstract_nim_game_player(const std::string& name)
				: abstract_game_player<int, int>(name)
			{
			}

			
			
		};
	}
}
