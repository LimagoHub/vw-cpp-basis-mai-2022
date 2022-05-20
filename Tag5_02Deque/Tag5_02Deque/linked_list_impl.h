#pragma once
#include <memory>
#include "liste.h"
namespace vw
{
	namespace collections
	{
		/// <summary>
		/// 
		/// </summary>
		/// <typeparam name="T"></typeparam>
		template<class T>
		class linked_list_impl:public liste<T>{
			
			template<class T>
			struct kettenglied
			{
				
				std::shared_ptr<kettenglied> nach;
				std::weak_ptr<kettenglied> vor;
				T data;


				kettenglied(T data)
					: data(data), nach{nullptr}, vor{nullptr}
				{
				}
			};

			std::shared_ptr<kettenglied> start;
			std::shared_ptr<kettenglied> akt;
		
		public:


			linked_list_impl()
				: start(nullptr),
				  akt(nullptr)
			{
			}


			void append(T value) override;
			bool remove() override;
			void clear() override;
			T get() const override;
			bool move_first() override;
			bool move_last() override;
			bool move_previous() override;
			bool move_next() override;

			
			bool is_empty() const override
			{
				return start.use_count() == 0;
			}
			bool is_begin_of_list() const override
			{
				return start == akt;
			}
			bool is_end_of_list() const override
			{
				return is_empty() || akt->nach.use_count() == 0;
			}
		};
	}
}