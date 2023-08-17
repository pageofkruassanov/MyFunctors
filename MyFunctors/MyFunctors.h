#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

namespace MyFunctors {

	class FindMinFunctor {
	public:
		int operator()(int x, int y);
		int operator()(std::vector<int> obj);
	};

	class FindMaxFunctor {
	public:
		int operator()(int x, int y);
		int operator()(std::vector<int> obj);
	};

	class SortToMinFunctor {
	public:
		void operator()(std::vector<int>& obj);
	};

	class SortToMaxFunctor {
	public:
		void operator()(std::vector<int>& obj);
	};

	class IncreaseElements {
	public:
		void operator()(std::vector<int>& obj,const int increaseNum);
	};

	class DecreaseElemnts {
	public:
		void operator()(std::vector<int>& obj, const int decraseNum);
	};

	class RemoveElements {
	public:
		void operator()(std::vector<int>& obj, const int element);
	};

}