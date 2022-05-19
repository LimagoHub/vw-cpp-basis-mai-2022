#pragma once


#include <string>
namespace vw {
	namespace games {
		template<class BOARD, class MOVE>
		class player
		{
		public:
			virtual std::string get_name() = 0;
			virtual MOVE do_turn(const BOARD& board) = 0;
		};
	}
}
