#pragma once
#include <iostream>

#include "game.h"
namespace vw {
	namespace games {

		class nim_game_impl : public vw::games::game
		{
		private:
			int stones;
			bool game_over;
			
			void execute_round()
			{
				human_turn();
				computer_turn();
			}
			
			void human_turn()
			{
				int move;
				while(true)
				{
					std::cout << " Es gibt " << stones << " Steine. Bitte nehmen Sie 1, 2 oder 3." << std::endl;
					std::cin >> move;
					if (move >= 1 && move <= 3) break;
					std::cout << "Ungueltiger zug" << std::endl;
				}
				
				stones -= move;
			}
			void computer_turn()
			{
				const int moves[] = { 3,1,1,2 };
				int move;

				if(stones < 1)
				{
					std::cout << "Du Loser" << std::endl;
					game_over = true;
					return;
				}

				if (stones == 1)
				{
					std::cout << "Du hast nur Glueck gehabt" << std::endl;
					game_over = true;
					return;
				}

				move = moves[stones % 4];
				std::cout << "Computer nimmt " << move << " Steine" << std::endl;

				stones -= move;
			}
		
		public:


			nim_game_impl():stones(23), game_over(false)
			{
			}

			void play() override
			{
				while( ! game_over)
				{
					execute_round();
				}
			}
		};

	}
}
