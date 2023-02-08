#ifndef LEETCODEPRACTICE_SQRT_H
#define LEETCODEPRACTICE_SQRT_H

#include <iostream>

namespace s21 {
    class Sqrt {
    public:
        static int Find(int x) {
            int64_t start = 0, end = x;
            while (start + 1 < end) {
                int64_t middle = start + (end - start) / 2;
                if (middle * middle == x) {
                    return static_cast<int>(middle);
                } else if (middle * middle < x) {
                    start = middle;
                } else {
                    end = middle;
                }
            }
            if (end * end == x) {
                return static_cast<int>(end);
            }
            return static_cast<int>(start);
        }
    };
}

#endif //LEETCODEPRACTICE_SQRT_H
