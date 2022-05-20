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
					this->move_last();
					akt->nach = neu;
					neu->vor = akt;
				}
				akt = neu;
			}
			bool update(T value) override
			{
				if(is_empty()) return false;
				akt->data = value;
				return true;
			}
			bool remove() override{
				if (is_empty()) return false;

				if(is_begin_of_list() && is_end_of_list())
				{
					start.reset();
					akt.reset();
					
				} else if (is_begin_of_list())
				{
					start = akt = akt->nach;
					akt->vor.reset();
				} else if (is_end_of_list())
				{
					move_previous();
					akt->nach.reset();
				} else
				{
					akt->vor.lock()->nach = akt->nach;
					akt->nach->vor = akt->vor;
					move_next();
				}

				return true;
			}
			
			T get() const override
			{
				if(is_empty())	return {};
				return akt->data;
			}
			
			bool move_previous() override {
				if(is_begin_of_list()) return false;
				akt = akt->vor.lock();
				return true;
			}
			bool move_next() override {
				if (is_end_of_list()) return false;
				akt = akt->nach;
				return true;
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