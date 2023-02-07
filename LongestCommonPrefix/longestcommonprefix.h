#ifndef LEETCODEPRACTICE_LONGESTCOMMONPREFIX_H
#define LEETCODEPRACTICE_LONGESTCOMMONPREFIX_H

#include <iostream>
#include <algorithm>
#include <vector>

namespace s21 {
    class LongestCommonPrefix {
    public:
        static std::string Find(std::vector<std::string> &strings) {
            if (strings.size() == 0)
                return "";
            if (strings.size() == 1)
                return strings[0];

            std::sort(strings.begin(), strings.end());
            auto smallest_string_size = std::min(strings.front().size(), strings.back().size());

            auto front = strings.front(), back = strings.back();
            std::size_t current = 0;
            while (front[current] == back[current] && current < smallest_string_size)
                current++;
            return front.substr(0, current);
        }
    };
}

#endif //LEETCODEPRACTICE_LONGESTCOMMONPREFIX_H
