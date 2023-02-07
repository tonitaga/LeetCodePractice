#include "removedublicates.h"

int main() {
    std::vector<int> numbers {0,0,1,1,1,2,2,3,3,4};
    int k = s21::RemoveDuplicates::Remove(numbers);

    if (k == 5) std::cout << "k found correctly\n";
    std::vector<int> expected_numbers {0,1,2,3,4};
    for (auto number : numbers)
        std::cout << number << ' ';
    std::cout << '\n';


}
