#pragma once

namespace vw
{
	namespace collections
	{
		/// <summary>
		/// 
		/// </summary>
		/// <typeparam name="T"></typeparam>
		template<class T>
		class liste
		{
		public:
			/// <summary>
			/// 
			/// </summary>
			/// <param name="value"></param>
			virtual void append(T value) = 0;
			virtual bool update(T value) = 0;
			virtual bool remove() = 0;
			
			virtual T get() const = 0; // Ab c++17 bitte mit Optional
			
			virtual void clear() 
			{
				while (remove());
			}
			virtual bool move_first()  {
				if (is_empty()) return false;
				while (move_previous());
				return true;
			}
			virtual bool move_last() {
				if (is_empty()) return false;
				while (move_next());
				return true;
			}
			virtual bool move_previous() = 0;
			virtual bool move_next() = 0;

			virtual bool is_empty() const = 0;
			
			/// <summary>
			/// liefert true wenn entweder die Liste leer ist oder der Cursor auf dem ERSTEN Satz steht
			/// </summary>
			/// <returns></returns>
			virtual bool is_begin_of_list() const = 0;
			/// <summary>
			/// liefert true wenn entweder die Liste leer ist oder der Cursor auf dem letzten Satz steht
			/// </summary>
			/// <returns></returns>
			virtual bool is_end_of_list() const = 0;


		};
	}
}
