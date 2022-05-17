#pragma once
namespace vw
{
	namespace collections {

		class stapel {

			int *data;// Bitte nicht, sondern Vector verwenden
			size_t index;
			size_t size;

			void init(const stapel& other)  noexcept;
		
		public:
			stapel(size_t size = 10)  noexcept;

			// Copy-Constrctor
			stapel(const stapel& other)  noexcept;

			// Move-Constructor
			stapel(stapel&& other)  noexcept
			{
				data = other.data;
				size = other.size;
				index = other.index;

				other.data = nullptr;
				other.size = 0;
				other.index = 0;
			}
			
			~stapel() noexcept;

			///
			///
			void push(const int value);

			int pop();

			bool is_empty() const noexcept;
			bool is_full() const noexcept;
			

			stapel& operator = (const stapel& other);
			stapel& operator = (stapel&& other)
			{
				data = other.data;
				size = other.size;
				index = other.index;

				other.data = nullptr;
				other.size = 0;
				other.index = 0;
			}
		};

	}
}