#include "MyFunctors.h"

int MyFunctors::FindMinFunctor::operator()(int x, int y)
{
	if (x < y)
		return x;
	else
		return y;
}

int MyFunctors::FindMinFunctor::operator()(std::vector<int> obj)
{
	if (obj.size() == 0)
		throw std::exception("Error / Vector empty / FindMinFunctor");
	return *min_element(obj.begin(), obj.end());
}

int MyFunctors::FindMaxFunctor::operator()(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int MyFunctors::FindMaxFunctor::operator()(std::vector<int> obj)
{
	if (obj.size() == 0)
		throw std::exception("Error / Vector empty / FindMaxFunctor");
	return *max_element(obj.begin(), obj.end());
}

void MyFunctors::SortToMinFunctor::operator()(std::vector<int>& obj)
{
	if (obj.size() == 0)
		throw std::exception("Error / Vector empty / FindMaxFunctor");
	std::sort(obj.rbegin(), obj.rend());
}

void MyFunctors::SortToMaxFunctor::operator()(std::vector<int>& obj)
{
	if (obj.size() == 0)
		throw std::exception("Error / Vector empty / FindMaxFunctor");
	std::sort(obj.begin(), obj.end());
}

void MyFunctors::IncreaseElements::operator()(std::vector<int>& obj, const int increaseNum)
{
	for (int i = 0; i < obj.size(); i++)
		obj[i] += increaseNum;
}

void MyFunctors::DecreaseElemnts::operator()(std::vector<int>& obj, const int decraseNum)
{
	for (int i = 0; i < obj.size(); i++)
		obj[i] -= decraseNum;
}

void MyFunctors::RemoveElements::operator()(std::vector<int>& obj, const int element)
{
	obj.erase(std::remove(obj.begin(), obj.end(), element), obj.end());
}
