#pragma once
namespace collections {

	class stapel {

	public:
		stapel();

		///
		///
		void push(const int value);

		int pop();

		bool is_empty() const;
		bool is_full() const;

	};

}