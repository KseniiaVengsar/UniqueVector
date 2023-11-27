// UniqueVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Нужно реализовать функцию, которая удаляет все дубликаты, а не только подряд идущие, из std::vector.

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
void removeDuplicates(std::vector<T>& vec) {
    
    std::sort(vec.begin(), vec.end());

    
    auto last = std::unique(vec.begin(), vec.end());

    // Удаляем лишние элементы
    vec.erase(last, vec.end());
}

int main() {
    std::vector<int> numbers = { 1, 1, 2, 5, 6, 1, 2, 4 };

    std::cout << "Before: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

   
    removeDuplicates(numbers);

    std::cout << "After: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
