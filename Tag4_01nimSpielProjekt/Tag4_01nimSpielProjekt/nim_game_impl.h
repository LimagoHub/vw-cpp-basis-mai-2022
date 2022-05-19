#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "abstract_game.h"
#include "player.h"
namespace vw {
	namespace games {

		class nim_game_impl : public vw::games::abstract_game<int,int>
		{
		
		

		protected:

			
			
			bool is_move_valid() override
			{
				return get_move() >= 1 && get_move() <= 3;

			}
			void update_game() override
			{
				set_board(get_board() - get_move());
			}
			
			bool is_game_over() override
			{
				return get_board() < 1 || get_players().empty();
			}
		
		public:


			nim_game_impl()
			{
				set_board(23);
				
			}

			

			
		};

	}
}
