#include <iostream>
#include <list>

int main() {
    std::list<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    numbers.pop_front();
    numbers.pop_back();

    for (int x : numbers) {
        std::cout << x << " ";
    }
}
//slakl;dksald sjakldshash djashdjasdjskhsajk