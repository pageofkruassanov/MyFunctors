#include <iostream>
#include "MyFunctors.h"

using namespace MyFunctors;

int main()
{
    FindMinFunctor minElement;
    std::cout << minElement(11, 10) << std::endl;
    std::vector<int> vec = { -1, 10, 99, 7, 10, 25, 33, 14, -20 };
    std::cout << minElement(vec) << std::endl << std::endl;

    FindMaxFunctor maxElement;
    std::cout << maxElement(5, 11) << std::endl;
    std::cout << maxElement(vec) << std::endl << std::endl;

    SortToMinFunctor sortToMin;
    sortToMin(vec);
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl << std::endl;

    SortToMaxFunctor sortToMax;
    sortToMax(vec);
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl << std::endl;

    IncreaseElements inreaseEl;
    inreaseEl(vec, 10);
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl << std::endl;

    DecreaseElemnts decreaseEl;
    decreaseEl(vec, 20);
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl << std::endl;

    RemoveElements removeEl;
    removeEl(vec, 0);
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl << std::endl;
}