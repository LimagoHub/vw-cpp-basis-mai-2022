#pragma once

#include "player.h"

namespace vw {
	namespace games {
		template<class BOARD, class MOVE>
		class abstract_game_player : public vw::games::player<BOARD,MOVE>
		{

			std::string name;


		public:
			abstract_game_player(const std::string& name)
				: name(name)
			{
			}

			std::string get_name() override
			{
				return name;
			}

		};
	}
}
