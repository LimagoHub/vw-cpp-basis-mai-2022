#pragma once
#include <memory>
#include "liste.h"

using namespace std;
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
				
				std::shared_ptr<kettenglied<T>> nach;
				std::weak_ptr<kettenglied<T>> vor;
				T data;


				kettenglied(T data)
					: data(data), nach{nullptr}, vor{nach}
				{
				}
			};

			std::shared_ptr<kettenglied<T>> start;
			std::shared_ptr<kettenglied<T>> akt;
		
		public:


			linked_list_impl()
				: start(nullptr),
				  akt(nullptr)
			{
			}


			void append(T value) override
			{
				shared_ptr<kettenglied<T>> neu{ new kettenglied<T>{value} };
				if(is_empty())
				{
					start =  neu;
				} else
				{
					move_last();
					akt->nach = neu;
					neu->vor = akt;
				}
				akt = neu;
			}
			bool update(T value) override
			{
				return false;
			}
			bool remove() override{
				return false;
			}
			void clear() override
			{
				
			}
			T get() const override
			{
				return {};
			}
			bool move_first() override {
				return false;
			}
			bool move_last() override {
				return false;
			}
			bool move_previous() override {
				return false;
			}
			bool move_next() override {
				return false;
			}

			
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