#ifndef LEETCODEPRACTICE_TRIPLES_H
#define LEETCODEPRACTICE_TRIPLES_H

#include <iostream>
#include <numeric> // std::reduce need to find sum of vector
#include <algorithm> // std::sort
#include <vector> // std::vector
#include <set> // std::set

namespace s21 {
    class Triples {
    public:
        using sz = std::size_t;

        static std::vector<std::vector<int>> ThreeSum(std::vector<int> &numbers) {
            std::vector<std::vector<int>> result;
            if (std::reduce(numbers.begin(), numbers.end()) == 0 && numbers.size() == 3) {
                result.push_back(numbers);
                return result;
            }

            std::set<std::vector<int>> triples;
            auto size = numbers.size();

            for (sz i = 0; i < size; ++i) {
                for (sz j = i + 1; j < size; ++j) {
                    for (sz k = j + 1; k < size; ++k) {
                        if (numbers[i] + numbers[j] + numbers[k] == 0) {
                            std::vector<int> triple {numbers[i], numbers[j], numbers[k]};
                            std::sort(triple.begin(), triple.end());
                            triples.insert(triple);
                        }
                    }
                }
            }
            for (const auto& vector : triples) {
                result.push_back(vector);
            }
            return result;
        }
    };
}

#endif //LEETCODEPRACTICE_TRIPLES_H
