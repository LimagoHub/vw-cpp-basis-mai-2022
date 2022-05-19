#pragma once
#include "game.h"
#include "player.h"

namespace vw {
	namespace games {

		template<class BOARD, class MOVE>
		class abstract_game: public vw::games::game
		{

			BOARD board;
			MOVE move;
			
			player<BOARD, MOVE>* current_player;

			std::vector<player<BOARD, MOVE>*> players;


		protected:
			BOARD get_board() const
			{
				return board;
			}

			MOVE get_move() const
			{
				return move;
			}
		
			void set_board(const BOARD& board)
			{
				this->board = board;
			}

			void set_move(const MOVE& move)
			{
				this->move = move;
			}

		
			std::vector<player<BOARD, MOVE>*> get_players() const
			{
				return players;
			}
			
			player<BOARD, MOVE>* get_current_player() const
			{
				return current_player;
			}

			void set_current_player(player<BOARD, MOVE>* const current_player)
			{
				this->current_player = current_player;
			}

			virtual bool is_move_valid() = 0;
			
			virtual void update_game() = 0;
			

			virtual bool is_game_over() = 0;
			

		private:
			

			
			void execute_round()  // Integration
			{
				for (auto player : players)
					execute_move_for(player);
			}


			void execute_move_for(player<BOARD, MOVE>* player)
			{
				if (is_game_over()) return;
				set_current_player(player);
				execute_move_for_current_player();
			}

			void execute_move_for_current_player()
			{
				execute_turn();
				terminate_turn();
			}

			void execute_turn()
			{
				do
				{
					move = get_current_player()->do_turn(board);

				} while (players_turn_is_invalid());
			}
			
			bool players_turn_is_invalid()
			{
				if (is_move_valid()) return false;
				std::cout << "Ungueltiger zug" << std::endl;
				return true;
			}

			void terminate_turn()
			{
				update_game();
				write_game_over_message_if_game_is_over();
			}

			void write_game_over_message_if_game_is_over()
			{
				if (is_game_over()) std::cout << get_current_player()->get_name() << " hat verloren." << std::endl;

			}
		
		public:
			void add_player(player<BOARD, MOVE>* player)
			{
				players.push_back(player);
			}

			void play() override
			{
				while (!is_game_over()) execute_round();

			}

			
		};

	}
}
