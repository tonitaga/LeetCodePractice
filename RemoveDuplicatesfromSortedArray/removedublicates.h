#ifndef LEETCODEPRACTICE_REMOVEDUBLICATES_H
#define LEETCODEPRACTICE_REMOVEDUBLICATES_H

#include <iostream>
#include <vector>

namespace s21 {
    class RemoveDuplicates {
    public:
        static int Remove(std::vector<int> &numbers) {
            int result = 0;
            if (!numbers.empty()) {
                int remove_from_index = 1;
                for (std::size_t i = 1; i != numbers.size(); ++i) {
                    if (numbers[i] == numbers[i - 1]) {}
                    else {
                        numbers[remove_from_index] = numbers[i];
                        remove_from_index += 1;
                    }
                }
                numbers.erase(numbers.begin() + remove_from_index, numbers.end());
                result = numbers.size();
            }
            return result;
        }
    };
}

#endif //LEETCODEPRACTICE_REMOVEDUBLICATES_H
